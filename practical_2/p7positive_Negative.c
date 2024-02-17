#include <stdio.h>
int main(){
	int no;
	printf("Enter Number to check Postive/Negative: ");
	scanf("%d", &no);
	if(no>0){
		printf("%d is +ve\n",no);
	}else if(no<0){
		printf("%d is -ve\n",no);	
	}else if(no==0){
		printf("%d is is Zero\n", no);
	}else{
		printf("Something Wrong!!\n");
	}

return 0;
}
