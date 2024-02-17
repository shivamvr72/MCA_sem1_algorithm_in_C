#include <stdio.h>
#include <limits.h>//contant in limits to know min and max value of basic data type

int main(){
	printf("char_bit= %d\n", CHAR_BIT);
	printf("Char_max= %d\n", CHAR_MAX); 
	printf("Char_min= %d\n", CHAR_MIN); 
	printf("INT_max= %d\n", INT_MAX);
	printf("INT_MIN= %d\n", INT_MIN);  
	printf("LONG_max= %ld\n", LONG_MAX);
	printf("LONG_max= %ld\n", LONG_MIN);
	printf("SCHAR_max= %d\n", SCHAR_MAX);
	printf("SCHAR_MIN= %d\n", SCHAR_MIN);
	printf("SHRT_MAX= %d\n", SHRT_MAX);
	printf("SHRT_MIN= %d\n", SHRT_MIN);
	printf("UCHAR_MAX= %d\n", UCHAR_MAX);
	printf("UINT_MAX= %u\n", UINT_MAX);
	printf("ULONG_MAX= %lu\n", ULONG_MAX);
	printf("USHRT_MAX= %d\n", USHRT_MAX);
	
return 0;
}
