#include <stdio.h>
int factfun(int n){
	if(n==1 || n==0){
		return 1;	
	}
	int factmn = factfun(n-1);
	int fact = n*factmn;
	printf("fact = %d, n=%d, fmn=%d\n", fact,n,factmn);
	return fact;
}

int main(){
	printf("factorial = %d\n", factfun(5));
return 0;
}
