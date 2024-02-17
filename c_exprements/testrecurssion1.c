#include <stdio.h>

int printnum(int n){
	if(n==0){
		printf("\n");
		return 0;
	}
	printf(" %d", n);
	printnum(n-1);
}

int main(){
	int num;
	printf("enter num: ");
	scanf("%d", &num);
	printnum(num);
return 0;
}
