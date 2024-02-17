#include <stdio.h>
int sumof(int i, int n, int sum){
	if(i==n){
		sum+=i;
		printf("sum = %d\n", sum);
		return sum;
	}	
	sum+=i;
	printf("print at call time = %d\n", i);
	sumof(i+1, n, sum);
	printf("print at return time = %d\n", i);
	return 1;	
}
int main(){
	sumof(1,5,0);
return 0;
}
