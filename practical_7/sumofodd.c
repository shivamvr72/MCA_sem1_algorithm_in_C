#include <stdio.h>
int main(){
	int n,sum=0,c;
	printf("Enter N :");
	scanf("%d", &n);
	while(n>=0){
		if(c%2==1){
			sum+=c;
			printf("%d\n",sum);
		}
		n--;
		c++;
	}


	return 0;
}
