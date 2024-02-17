#include <stdio.h>
int main(){
	float a=0, b=0;
	char op;
	do{
		printf("Enter Number a and b : ");
		scanf("%f %f", &a, &b);
		printf("Select Operation: ");
		scanf(" %c", &op);
		
		if(op=='+'){
			printf("sum= %.2f\n", a+b);
		}else if(op=='-'){
			printf("sub= %.2f\n", a-b);
		}else if(op=='*'){
			printf("mul= %.2f\n", a*b);
		}else if(op=='/'){
			printf("div= %.2f\n", a/b);
		}else{
			printf("something wrong!\n");
		}
		
		
		/*switch(op){
			case '+':
				printf("sum= %.2f\n", a+b);
				break;
			case '-':
				printf("sub= %.2f\n", a-b);
				break;
			case '*':
				printf("mul= %.2f\n", a*b);
				break;
			case '/':
				printf("div= %.2f\n", a/b);
				break;		
			default:
				printf("something wrong!\n");
		}*/
	
	}while(a!=0 && b!=0);
return 0;
}
