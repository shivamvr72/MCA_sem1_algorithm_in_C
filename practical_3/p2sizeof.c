#include <stdio.h>
int main(){
	char c;
	int i;
	float f;
	double d;
	//void v; void so can't store value and has no size
	printf("size of char = %ld\n", sizeof(c));
	printf("size of int = %ld\n", sizeof(i));
	printf("size of float = %ld\n", sizeof(f));
	printf("size of double = %ld\n", sizeof(d));
//	printf("size of %ld\n", sizeof(v));
return 0;
}
