#include <stdio.h>
int main(){
	char c;
	signed char sc;
	unsigned char uc;
	
	int i;
	signed int sgi;
	unsigned int ugi;
	short int si;
	long int li;
	signed short int ssi;
	unsigned short int usi;
	signed long int sli;
	unsigned long int uli;
	
	
	float f;
	double d;
	long double ld;
	
	//void v; void so can't store value and has no size
	printf("size of char = %ld\n", sizeof(c));
	printf("size of signed char = %ld\n", sizeof(sc));
	printf("size of unsigned char = %ld\n\n", sizeof(uc));
	
	
	printf("size of int = %ld\n", sizeof(i));
	printf("size of int signed = %ld\n", sizeof(sgi));
	printf("size of int unsigned = %ld\n", sizeof(ugi));
	printf("size of int short = %ld\n", sizeof(si));
	printf("size of int long = %ld\n", sizeof(li));
	printf("size of int signed short = %ld\n", sizeof(ssi));
	printf("size of int unsigned short = %ld\n", sizeof(usi));
	printf("size of int signed long = %ld\n", sizeof(sli));
	printf("size of int unsigned long = %ld\n\n", sizeof(uli));
	
	printf("size of float = %ld\n", sizeof(f));
	printf("size of double = %ld\n", sizeof(d));
	printf("size of long double = %ld\n", sizeof(ld));
//	printf("size of %ld\n", sizeof(v));
return 0;
}
