#include <ctype.h>
#include <stdio.h>
int main(){
	char ss[50];
	printf("Enter String : ");
	scanf("%[^\n]", ss);
	int len;
	int alpacount=0, numcount=0, vowelcount=0, conscount=0, sncount=0;
	len = sizeof(ss);
	for(int i=0; i<len; i++){
		int dig = isdigit(ss[i]);
		int alp = isalpha(ss[i]);
		if(alp != 0){
			alpacount++;
		}else if(dig!=0){
			numcount++;
		}else{
//		printf("%d ", alp);
			sncount++;
		}
		
		if(ss[i] == 'a' || ss[i] == 'A' || ss[i] == 'e' || ss[i] == 'E' || ss[i] == 'i' || ss[i] == 'I' || ss[i] == 'O' || ss[i] == 'o' || ss[i] == 'U' || ss[i] == 'u'){
			vowelcount++;
		}else{
			conscount++;
		}
	}
	printf("Alphabets: %d \nNumericals: %d \nSpecial & Numericals: %d \nVowels: %d \ncounsonent: %d\n", alpacount, numcount, sncount, vowelcount, conscount);

	return 0;
}
