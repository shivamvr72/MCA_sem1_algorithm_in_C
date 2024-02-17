#include <stdio.h>

void strrev(){
	char ch;
	scanf("%c", &ch);
	if(ch == ';'){
		return;
	}
	strrev();
	printf("%c", ch);
}
int main(){
	printf("Enter String to reverse: ");
	strrev();
	printf("\n");
return 0;
}
