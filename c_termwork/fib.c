#include <stdio.h>
void fib(int a, int b, int n){
	if(n==0 || n==1){
		printf("\n");
		return;
	}
	int c=a+b;
	printf("%d ", c);
	fib(b, c, n-1);
}

int main(){
	int a=0, b=1, n;
	printf("Enter Size Of Fibonacci: ");
	scanf("%d", &n);
	printf("%d %d ", a,b);
	fib(a, b, n);
return 0;
}
