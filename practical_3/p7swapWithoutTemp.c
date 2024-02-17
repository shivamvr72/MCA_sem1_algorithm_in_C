#include <stdio.h>
int main(){
	int a,b;
	printf("Enter No1 and No2 To Swap: ");
	scanf("%d %d", &a, &b);
	a= a+b;
	b= a-b;
	a = a-b;
	printf("swapped no1=%d and no2=%d\n ", a,b);
return 0;
}
