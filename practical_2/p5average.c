#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter Three Numbers For Average (like 1 2 3): ");
	scanf("%f %f %f", &a, &b, &c);
	
	float avg = (a+b+c)/3;
	printf("Average of 3 no = %.2f \n", avg);
return 0;
}
