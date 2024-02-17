#include <stdio.h>
int main(){
	int n,fact=1;
	printf("factorial enter:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		fact*=i;
	}
	printf("fact= %d\n", fact);
	return 0;
}
