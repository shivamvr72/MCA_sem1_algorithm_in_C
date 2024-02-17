#include <stdio.h>
int main(){
	int	n=5;
	for(int i=1; i<=n ; i++){
	//upside down 90 right
		for(int j=n; j>i;j--){
			printf(" ");
		}
	//90 left tringle
		for(int j=0; j<i; j++){
			printf("*");
		}
	//90 left triagnel
		for(int j=0;j<i-1; j++){
			printf("*");
		}
	printf("\n");
	}
return 0; 
}
