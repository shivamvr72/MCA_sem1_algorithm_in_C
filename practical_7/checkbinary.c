#include <stdio.h>
int main(){
	int num;
	int x,t;
	printf("check binary: ");
	scanf("%d", &num);
	while(num>0){
		int b=num%10;
		num/=10;
		if(b==0 || b==1){
			t=1;
		}else{
			//printf("%d\n",b); 
			goto x;
		}
	}
	if(t==1){
		printf("Binary \n");	
	}else{
		x:
		printf("not binary \n");
		}
return 0;
}
