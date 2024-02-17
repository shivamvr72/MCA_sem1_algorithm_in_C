#include <stdio.h>
int main(){
	float no;
	int temp;
	printf("enter no: ");
	scanf("%f", &no);
	temp = no;
	if(temp != no){
		printf("Float no is entered\n");
	}else{
		if(no>0){
			printf("ve+\n");
		}else if(no<0){
			printf("ve-\n");
		}else if(no==0){
			printf("zero \n");
		}else{
			printf("something wrong\n");
		}
	}
	
	
return 0;
}
