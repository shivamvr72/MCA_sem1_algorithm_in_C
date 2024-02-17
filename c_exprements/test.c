#include <stdio.h>
int main(){
//no greater than average from the array
	int n=0;
	int sum;
	int avg;
	int narr[n];
	

	printf("Enter size of an array: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("Enter no for arr[%d]", i);
		scanf("%d", &narr[i]);
		sum+=narr[i];
	}
	avg = sum/n;
	printf("%d\n", avg);
	for(int i=0; i<n; i++){
		if(narr[i]>avg){
			printf("No Greater than avg : %d", narr[i]);
		}
	}
return 0;

}
