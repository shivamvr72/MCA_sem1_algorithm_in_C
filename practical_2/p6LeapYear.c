#include <stdio.h>
int main(){
	int year;
	printf("Enter Year To Check Leap year: ");
	scanf("%d", &year);
	
	if(year%4==0 || year%400==0 && year%100==1){
		printf("%d is Leap Year\n" , year);
	}else{
		printf("%d is normal year\n", year);
	}
return 0;
}
