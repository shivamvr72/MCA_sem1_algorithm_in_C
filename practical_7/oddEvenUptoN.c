#include <stdio.h>
int main(){
	int n=0;
	printf("Enter number: ");
	scanf("%d", &n);
	int c=0;
	while(n>=0){
		if(c%2==0){
			printf("%d\n",c);
		}
		n--;
		c++;
	}
	return 0;
}
