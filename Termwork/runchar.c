#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Enter Run String: ");
	scanf("%[^\n]", str);
//	printf("%s\n", str);
	int len = strlen(str);
	int r2[10];
	int count=1;
	int p=0;
	for(int i=1; i<=len;i++){
		char res = str[i-1];
		if(str[i]==res){
//	printf("%c %c\n", str[i], res);
			count++;
		}
		if(str[i]!=res){
			r2[p] = count;
			p++;
			count=1;
		}
//		printf("p = %d\n", p);
	}
	int size = sizeof(r2)/4;
	for(int i=1; i<size; i++){
		int res2 = r2[i-1];
		if(r2[i]>res2){
			printf("run = %d\n", r2[i]);
		}
	}
	return 0;
}
/*		if(count>r2){		
			printf("count = %d\n",count);
		}else{
			printf("r2 = %d\n", r2);
		} */
