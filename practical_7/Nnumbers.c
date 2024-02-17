#include <stdio.h>
int main(){
	int n;
	printf("enter n number: ");
	scanf("%d", &n);
	int natural = 1;
	while(n>0){
		printf("%d\n",natural);
		n--;
		natural++;
	}
return 0;
}
