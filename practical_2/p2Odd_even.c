#include <stdio.h>
int main(){
	int no;
	printf("Enter Number for odd/even: ");
	scanf("%d", &no);
	if(no%2==0){
		printf("%d is Even\n", no);
	}else{
		printf("%d is odd\n", no);
	}
return 0;
}
