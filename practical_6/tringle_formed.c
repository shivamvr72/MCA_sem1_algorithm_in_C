#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter Three side of the triangle a,b,c : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		printf("Triagle can be formed \n");
		if(a == b && b == c){
			printf("Equilateral\n");
		}else if(a==b || b==c || c==a){
			printf("Isocell Triangle\n");
		}else{
			printf("scalen trinagle \n");
		}
		
	}else{
		printf("Triangel cannot be formed \n");
	}
return 0;
}
