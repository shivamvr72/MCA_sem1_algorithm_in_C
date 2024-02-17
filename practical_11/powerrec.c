#include <stdio.h>
int power(int m, int n){
	static int p;
	printf("%d ", p);
	if(n==0){
		printf("\n");
		return p;
	}
	power(p, n-1);
	p += m*n;
}
int main(){
	int m,n;
	printf("Enter X ^ n : ");
	scanf("%d %d",&m,&n);
	printf("%d\n", power(m,n));
	return 0;
}
