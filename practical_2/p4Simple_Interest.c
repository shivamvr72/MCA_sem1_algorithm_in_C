#include <stdio.h>
int main(){
	float i,p,r,n,c=100;
	printf("Enter Priciple: ");
	scanf("%f", &p);
	printf("Enter Rate Of Interest: ");
	scanf("%f", &r);
	printf("Enter No Of Year: ");
	scanf("%f", &n);
	i=p*r*n/c;
	
	printf("Intrest is %.2f for principle of %.2f at the rate of %.2f for %.2f Years. \n", i,p,r,n);
return 0;
}
