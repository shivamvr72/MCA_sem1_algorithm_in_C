#include <stdio.h> 
int main(){
	int n;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter [%d] : ", i);
		scanf("%d", &arr[i]);
	}
	int count=0;
	int rm;//= arr[0];
	for(int i=0; i<n; i++){
		rm = arr[i];
		if(rm==arr[i]){
			arr[i] = arr[i++];
			count++;
			printf("%d\n", arr[i]);
		}
	}
		printf("no of times repeadted : %d\n", count);
	return 0;
}
