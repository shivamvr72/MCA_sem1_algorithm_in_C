#include <stdio.h>
int fib(int a, int b, int n){
	if(n==0){
		printf("\n");
		return 0;
	}
	int c = a+b;
	printf("%d ", c);
	fib(b, c, n-1);
}

int main(){
	int a = 0;
	int b = 1;
	
	int n;
	printf("Enter Length of fib:");
	scanf("%d", &n);
	printf("%d %d ", a, b);
	fib(a,b,n);
	
	return 0;
}

