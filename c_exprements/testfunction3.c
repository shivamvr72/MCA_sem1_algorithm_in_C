#include <stdio.h>
int odds(int ca[], int len){
	int odd;
	for(int i=0; i<len; i++){
		if(ca[i]%2==1){
			printf("%d is odd\n", ca[i]+1);
		}else{
			printf("%d is even\n", ca[i]+1);
		}
	}
}

int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int carr[n];
	int len = sizeof(carr)/sizeof(carr[0]);
	printf("%d\n", len);
	for(int i=0; i<n; i++){
		printf("enter no: ");
		scanf("%d", &carr[n]);
	}
	odds(carr, len);
	
	
	return 0;	
}
