#include <stdio.h>
int main(){
	int n=5;
	//upper half
	for(int i=0; i<n; i++){
		//1st half
		for(int j=n; j>i; j--){
			printf("*");
		}
		//second half space
		for(int j=0; j<i; j++){
			printf(" ");
		}
		//space
		for(int j=0; j<i; j++){
			printf(" ");
		} 
		//second half
		for(int j=n; j>i; j--){
			printf("*");
		}
		printf("\n");
	}
	//lower half
	for(int i=n-2; i>=0; i--){
		//1st half
		for(int j=n; j>i; j--){
			printf("*");
		}
		//second half space
		for(int j=0; j<i; j++){
			printf(" ");
		}
		//space
		for(int j=0; j<i; j++){
			printf(" ");
		} 
		//second half
		for(int j=n; j>i; j--){
			printf("*");
		}
		printf("\n");
	}
return 0;
}
