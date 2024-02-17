//passing an array into the function
#include <stdio.h>
float avgfunc(int []); //function declaration
int main(){
	int i,arr[5];
	float avg;
	for(i=0;i<5;i++){
		printf("Enter num:");
		scanf("%d", &arr[i]);		
	}
		avg = avgfunc(arr);
		printf("avg %f: \n", avg);
	
return 0;
}

float avgfunc(int a[]){
	float sum=0.0;
	for(int j=0; j<5; j++){
		sum+=a[j]/5;
	}
	return sum;
}
