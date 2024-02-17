#include <stdio.h>
int main(){
	int n;
	printf("Enter Size of array: ");
	scanf("%d", &n);
	int arr1[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("arr1[%d][%d] : ", i+1, j+1);
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j+1] == i,j+2){
				printf("yes i=%d j=%d \n", i,j);
			}
		}
		printf("\n");
	}
return 0;
}
