#include <stdio.h>
int main(){
	int a,b,temp;
	printf("Swap No Enter no1 and no2: ");
	scanf("%d %d", &a,&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("Swapped no1 = %d and no2 = %d\n", a,b);
	
	
return 0;
}
