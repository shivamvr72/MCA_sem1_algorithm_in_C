#include <stdio.h>
int pow(int b, int e);
void sortArray(int a[], int n);

int main(){
	int m,n,uniq=0;
	printf("Enter M and N: ");
	scanf("%d%d", &m, &n);
	if(m<0 || m>n || n<0||n>100){
		printf("Enter invalid!");
		return 0;
	}
	int arr[n], size=0;
	for(size=0; size<n; size++){
		arr[size]=(pow(2,size)*m)%n;
		if(arr[size]==0){
			size++;
			break;
		}
	}
	
	sortArray(arr,size);
	for(int i=0;i<size;i++){
	}
}
