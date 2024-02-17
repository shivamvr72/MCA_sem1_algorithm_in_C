#include <stdio.h>
int main(){
	float a,mul;
	int b;
	printf("Enter float no1 & no2: ");
	scanf("%f %d", &a, &b);
	mul = a*b;
	printf("multiple 4 point precision %.4f \n", mul);
//		printf("multiple used d specifier %d \n", mul);//undefined output randomly
	
return 0;
}
