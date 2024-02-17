#include <stdio.h>
int main(){
	int c=65;
	while(c<123){
		if(c==93 || c==94 || c==95 || c==96 || c==92 || c==91){
		c++;
		continue;
		}
		printf("%c\n",c);
		c++;
		
	}
return 0;
}
