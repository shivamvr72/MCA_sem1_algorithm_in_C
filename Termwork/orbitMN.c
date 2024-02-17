#include <stdio.h>

int arr[100];
void initialize(){
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
	initialize();
	unq=m;
	while(arr[unq]==-1){
		arr[unq]=1;
		arrlen++;
		unq=(unq*2)%n;
	}
	printf("%d\n", arrlen);
	return 0;
}
