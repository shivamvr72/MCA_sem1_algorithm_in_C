#include <stdio.h>
int fact(int n){
	static int pow=1;
	if(n==0){
		printf("\n");
		return pow;	
	}
	pow*=n;
	fact(n-1);
}

int main(){
	int n;
	printf("Enter N : ");
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}
