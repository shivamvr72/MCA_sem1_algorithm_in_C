#include <stdio.h>
int numbersn(int n){
	if(n==5){
		printf("\n");
		return 0;
	}
	printf("%d ",n);
	numbersn(n+1);
}

int numseries(int n){	
	if(n==5){
		printf("\n");
		return 0;
	}
	printf("%d	",n);
	return sumof(n+1);
}

//sum of natural number
int sum(int n){
	static int s;
	if(n==0){
		return s;
	}
	s+=n;
	sum(n-1);
}

int main(){
	int n;
	printf("Enter no: ");
	scanf("%d", &n);
	//numbersn(n);
	//numseries(n);
	printf("sum=%d\n", sum(n));
	
	return 0;
	

}
