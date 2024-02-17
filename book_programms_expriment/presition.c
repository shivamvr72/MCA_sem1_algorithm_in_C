#include <stdio.h>
int main(){
	printf("%10d \n", 123);
//	printf("%*d \n", 123); //warning
	printf("%+10d \n", 123);
	printf("%x \n", 123U); //hexa
	printf("%#x \n", 123);
	printf("%#X \n", 123);
	printf("%-10.2f \n", 12.301);
	printf("%10.2f \n", 12.301);
	printf("%lu \n", 123ul);
	printf("%s \n","hello");
	printf("%c \n",'a');
	
	int a=010;
	printf("a=%d\n", a);
	

return 0;
}
