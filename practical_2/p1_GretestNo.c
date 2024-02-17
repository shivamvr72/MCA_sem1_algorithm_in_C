#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter Three Number (like 1 2 3)");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c){
		printf("%d is largest\n", a);
	}else if(b>c){
		printf("%d is largest\n", b);
	}else if(c>b && c>a){
		printf("%d is largest\n", c);	
	}else if(a==b && b==c && c==a){
		printf("%d %d %d are same\n", a,b,c);
	}else{
		printf("Something Wrong\n");
	}
return 0;
}
