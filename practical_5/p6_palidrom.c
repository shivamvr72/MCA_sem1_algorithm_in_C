#include <stdio.h>
int main(){
	int no,m, res;
	printf("enter no to check palindrom or not: ");
	scanf("%d", &no);
	res = no;
	int pl = 0;
	while(no>0){
		m=no%10;
		pl= m+(pl*10);
		no/=10;
		
	}
		if(res==pl){
			printf("%d is palindrom\n",res);	
		}
		else{
			printf("%d is normal no\n",res);
		}
	
	return 0;
}
