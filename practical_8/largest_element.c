#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of an array : ");
	scanf("%d", &n);
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("Enter [%d] : ", i);
		scanf("%d", &arr[i]);
	}
	int large = arr[0];
	int small = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>large){
			large=arr[i];
		}
		if(arr[i]<small){
			small=arr[i];
		}
	}
	printf("largest : %d \t smallest :  %d\n", large, small);
	
	return 0;
}
