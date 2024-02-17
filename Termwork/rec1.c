//printing deceding  order number by passing a argument
#include <stdio.h>
int printnum(int n){
	if(n==0){
		return 0;
	}
	printf("%d\n", n);
	printnum(n-1);
}
//printing number for accending order
int printanum(int i,int n){
	if(i==n){
		return 0;
	}
	printf("%d\n", i++);
	printanum(i,n);
}
int main(){
	printnum(10);
	printanum(0, 10);
	return 0;
}
