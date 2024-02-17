#include <stdio.h>

int mul10(int num);//function declaration

int main(){
	int num, pow;
	printf("Enter num: ");
	scanf("%d", &num);
	printf("%d before call : \n", num);
	//pow = mul10(num);
	printf("%d on the call: \n", mul10(num));//here the function called by value so simply generete the copy of the value and not going to change the original value
	printf("%d after call: \n", num);
	
	return 0;
}
int mul10(int num){
	num*=10;
	return num;
}
