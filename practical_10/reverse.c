#include <stdio.h>
#include <string.h>
void reverse(char s[], int len){
	char ss2[50];
	int x=0;
	//printf("%d", len);
	for(int i=len-1,j=0; i>=0, j<len; i--, j++){
		printf("%c", s[i]);
		ss2[j] = s[i];
	}
	printf("\n");
	printf("%s\n", ss2);
}

int main(){	
	char ss[50];
	printf("Enter String: ");
	scanf("%[^\n]", ss);
	int len = sizeof(ss)/sizeof(ss[0]);
	//printf("%d", len);
	reverse(ss,len);
	return 0;
}
