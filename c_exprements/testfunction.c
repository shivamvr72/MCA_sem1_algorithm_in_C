#include <stdio.h>

//normal functions
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
void print(){
	printf("hello\n"); 
}

float cs(float f){
	float ftr,fz,cl;
	ftr = 5/9.;
	fz = 32.;
	cl = ftr*(f-fz);
	return cl;	
}



int main(){
	int n1, n2;
	float f;
	//printf("Enter num a & b: ");
	//scanf("%d %d", &n1, &n2);
	//printf("addition: %d\n", add(n1,n2));
	//printf("substraction: %d\n", sub(n1,n2));
	//print();
	printf("Enter Ferenheit: ");
	scanf("%f", &f);
	printf("Celcius= %f\n", cs(f));
return 0;
}
