#include <stdio.h>
int funcollatz(unsigned int n){
	if(n==1){
		return 0;
	}
	static int i=0;
	i++;
	if(n%2==0){
		funcollatz(n/2); 
	}else{
		funcollatz((n*3)+1);
	}
	return i;
}
int main(){
	unsigned int n;
	printf("Calculate Number of steps required to reach one in collatz function : ");
	scanf("%u", &n);
	printf("No of step required to solve collatz : %d\n", funcollatz(n));
return 0;
}
