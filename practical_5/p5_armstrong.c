#include <stdio.h>
int main(){
	int no, res, m, sum=0,count=1,pow=0;
	printf("Enter Number: ");
	scanf("%d", &no);
	res=no;
	while(no>0){
		m = no%10;
		no/=10;
		count++;
//		sum+=(m*=m);
		pow+=(m*m*m);
	}
	if(res==pow){
		printf("%d is armstrong number\n",pow);
	}else{
		printf("%d is normal number \n", res);
	}
return 0;
}
