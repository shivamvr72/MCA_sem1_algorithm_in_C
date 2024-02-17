#include <stdio.h>
int main(){
	int m,n;
	printf("Enter M and N for Quatient and Remaider: ");
	scanf("%d %d", &m, &n);
	
	int qtn = m/n;
	int remainder = m%n;
	/*int remainder1 = m-(2*qtn);
	if(remainder1 == 0){
		printf("reminder is even\n");
	}else{
		printf(" remiander is odd\n");
	}*/
	
	printf("quatient=%d\nremainder= %d\n",qtn, remainder);
return 0;
}
