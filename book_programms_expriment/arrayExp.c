#include <stdio.h>
int main(){
	int x=0;
	printf("Enter size: ");
	scanf("%d", &x);
	
	int arr[x];
	for(int i=0;i<x;i++){
		printf("\nEnter %d element",i);
		scanf("%d", &arr[i]);
	}	
	printf("%d", arr[3]);


return 0;
}
