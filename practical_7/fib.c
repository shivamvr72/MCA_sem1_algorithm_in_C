#include <stdio.h>
int main(){
	int n, a=1,b;
	printf("Enter Number");
	scanf("%d", &n);
	int fib=0;
	while(n>0){
 		fib=a+b;
		a=b;
		b=fib;
	printf("%d ", b);
		
	n--;
	}
return 0;
}
