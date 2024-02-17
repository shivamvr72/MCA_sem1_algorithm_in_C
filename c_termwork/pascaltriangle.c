#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	
	int i;
	for(i=0; i<n; i++){
		for(int j=n; j>i; j--){
			printf(" ");
		}
		int pc=1;
		int num=i;
		int d=1;
		for(int j=0; j<=i; j++){
			printf("%d ", pc);
			pc = pc*num;
			pc /= d;
			num--;
			d++;
		}
		printf("\n");
	}
	return 0;
}
