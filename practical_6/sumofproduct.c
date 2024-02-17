#include <stdio.h>
int main(){
	int a,b,sum;
	printf("number a and b for sumofproduct: ");
	scanf("%d %d", &a, &b);
	while(a>0){
		int m1=a%10;
		int m2=b%10;
		a/=10;
		sum+=m1*m2;
	}
	printf("sum of product %d\n", sum);
return 0;
}
