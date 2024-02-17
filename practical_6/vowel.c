#include <stdio.h>
int main(){
	char c;
	do{
		printf("Enter character to check vowel: ");
		scanf(" %c", &c);
		if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='O' || c=='o' || c=='u' || c=='U'){
			printf(" %c is vowel\n",c);
		}else{
			printf(" %c is normal alphabet\n",c);
		}
		
	}while(c != '$');
return 0;
}
