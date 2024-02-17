#include <stdio.h>
int main(){
	int num,max=0;
	printf("Enter Number: ");
	scanf("%d", &num);
	while(num>0){
		int r = num%10;
		num/=10;
		if(max<r){
			max=r;
		}
	}
	printf("%d is max\n",max);
return 0;
}
