#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter a,b,c side of triangle : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b && b==c){
		printf("Trinagle equilateral\n");
	}else if(a==b || b==c || a==c){
		printf("Isoceles\n");
	}else{
		printf("scalen\n");
	}
	
return 0;
}
