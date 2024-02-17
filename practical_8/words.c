#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int cn=1;
	char ss[50];
	printf("Enter String : ");
	scanf("%[^\n]", ss);
	//gets(ss);

	for(int i=0; i<strlen(ss); i++){
		if(isspace(ss[i])){
			cn++;
		}
	}
	printf("Words = %d\n", cn);
	
	return 0;
}
