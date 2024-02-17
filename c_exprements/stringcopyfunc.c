//string copy
#include <stdio.h>

void strcopy(char s1[],char s2[]){
	printf("Function copy called...\n");
	printf("Copying...\n");
	for(int i=0; s1[i]!='\0'; i++){
		s2[i] = s1[i];
	}
	//printf("s2in= %s\n",s2);
}


int main(){
	char str[50];
	char cps[50];
	printf("Enter String: ");
	for(int i=0; i<50; i++){
		scanf("%[^\n]", str);
	}
	printf("Entered = %s\n", str);
	
	strcopy(str,cps);
	printf("copied = %s\n", cps);
	
	return 0;
}
