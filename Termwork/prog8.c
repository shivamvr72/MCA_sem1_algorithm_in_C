#include <stdio.h>
int main(){
	int i, j, n;
	printf("Enter row: ");
	scanf("%d", &n);
	printf("*\n");
	//print the first upper half
	for(i=1; i<=n; i++){
		printf("*");
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		for(j=i-1;j>=1;j--){
			printf("%d", j);
		}
		printf("*");
		printf("\n");
	}
	//print the lower half of the patter 
	for(i=n-1;i>=1;i--){
		printf("*");
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		for(j=i-1;j>=1;j--){
			printf("%d",j);
		}
		printf("*");
		printf("\n");
	}
	printf("*");
	return 0;
}
