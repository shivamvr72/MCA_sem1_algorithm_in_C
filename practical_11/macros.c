#include <stdio.h>
#define true 1
#define false 0
#define func(a) (a>0 ? a; -a); 
#define counter(x, i, j)\
	for(x=i; x<j; x++)
int main(){
	int x=0;
	while(x!=true){
		printf("X is false \n");
		x++;
	}
	printf("out from loop x true \n");
	
	
	int a=4;
	while(a>0){
		printf("greater than 0\n");
		a=0;
	}
	printf("Out from loop \n");
	
	//for loop in macros
	int s;
	counter(s,1,7){
		printf("s is %d\n", s);
	}
	return 0;
}
