#include <stdio.h>
#include <float.h>
int main(){
	printf("decimal digit of presition double = %d \n",DBL_DIG); 
	printf("decimal digit of presition float = %d \n",FLT_DIG);
	printf("decimal digit of presition long double = %d \n",LDBL_DIG);
	printf("bits to hold the mantissa double = %d \n",DBL_MANT_DIG);
	printf("bits to hold the mantissa float = %d \n",FLT_MANT_DIG);
	printf("bits to hold the mantissa long double = %d \n",LDBL_MANT_DIG);
	printf("maximum exponunt values dbl = %d \n", DBL_MAX_10_EXP);
	printf("maximum exponunt values flt = %d \n", FLT_MAX_10_EXP);
	printf("maximum exponunt values Ldbl = %d \n", LDBL_MAX_10_EXP);
	printf("minimum exponunt values dbl = %d \n", DBL_MIN_10_EXP);
	printf("minimum exponunt values flt = %d \n", FLT_MIN_10_EXP);
	printf("minimum exponunt values ldbl = %d \n", LDBL_MIN_10_EXP);
	
return 0;
}
