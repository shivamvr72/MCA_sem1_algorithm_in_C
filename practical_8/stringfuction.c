#include <stdio.h>
#include <string.h>

int main(){
	char s1[10] = "sneh";
	char s2[10] = "shiv";
	char s3[10];
	int len1 = strlen(s1);

	int len2 = printf("%s\n",strcat(s1,s2));
	printf("%s\n", strcpy(s2,s1));
	printf("%d\n", len1);
	printf("%d\n", len2);
	puts(s2);
	strcpy(s3,s1);
	puts(s3);
//	printf("%d\n", strupr(s1));
//	printf("%s", *strrev(s1));
	return 0;
}
