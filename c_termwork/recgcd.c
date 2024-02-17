#include <stdio.h>
int gcdfunc(int n1, int n2){
	if(n2 != 0){
//		printf("%d, %d \n",n2, n1);
		return gcdfunc(n2, n1%n2);
	}else{
//	printf("b = %d, b= %d \n",n2, n1);
		return n1;
	}
}
int main(){
	int n1, n2;
	printf("Enter Nubmers to find gcd: ");
	scanf("%d %d", &n1, &n2);
	printf("GCD is %d\n", gcdfunc(n1, n2));
return 0;
}
