#include <stdio.h>
#include <ctype.h>
int main(){
	char s1[50];
	printf("Enter String: ");
	scanf("%[^\n]", s1);
	printf("%s\n" , s1);
	int len;
	len = sizeof(s1)/4;
	for(int i=0; i<len; i++){
		int t = isalpha(s1[i]);
		if(t!=0){
			printf("%c", s1[i]);
		}
	}
	printf("\n");
	return 0;
}
