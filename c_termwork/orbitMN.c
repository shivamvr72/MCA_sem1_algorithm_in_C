#include <stdio.h>

int arr[100];
void initializeArray(){
	int i;
	for(i=0;i<100;i++){
		arr[i]=-1;
	}
	return;
}
int main(){
	int m,n,unq=0;
	int arrlen=0;
	printf("Enter M and N: ");
	scanf("%d %d", &m, &n);
	initializeArray();
	unq=m;
	while(arr[unq]==-1){
		int pow=1;
		pow*=2;
		arr[unq]=1;
		arrlen++;
		unq=(unq*pow)%n;
	}
	printf("%d\n", arrlen);
	return 0;
}
