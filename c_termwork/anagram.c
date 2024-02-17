#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	char s2[100];
	int samec=0;
	int x=0;
	printf("Enter String1 : ");
	scanf("%[^\n]", s1);
	printf("Enter String2 : ");
	scanf(" %[^\n]", s2);
	//printf("%s\n", s1);
	//printf("%s\n", s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if(len1 == len2){
		for(int i=0; i<len1, i<len2 ; i++){
			if(s1[i]==s2[i]){
				samec++;
			}
		}
		
		if(samec==0){
			printf("-1\n");
		}else{
			printf("Matched Characters: %d\n", samec);
		}
	}else{
		printf("Entered Strins have diffrent sizes!!\n");
	}
	//printf("%d %d\n", len1, len2);
	
return 0;
}

/*		if(samec==len1-1 && samec==len2-1){
			printf("Anagram! : -1\n");
		}else{
			printf("Matched Character =%d\n", samec);
		}
	}*/

