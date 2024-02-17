#include <stdio.h>
//#include <math.h>

int prime(int p){
	int x=0;
	int pm;
	for(int i=2; i<=p; i++){
		if(p%i==1){
			printf("%d is Prime No\n", i);
		}else{
			printf("%d is non-Prime No\n", i);
		}
	}
	return 0;
}

int armstrong(int a){
	int temp = a;
	int pw=0;
	while(a>0){
		int m = a%10;
		a/=10;
		pw+=(m*m*m);	
	}
	if(temp==pw){
		printf("%d Armstrong No\n", temp);
	}else{
		printf("%d is Non Armstrong NO\n", temp);
	}

}

int main(){
	int no;
	printf("Enter Number: ");
	scanf("%d", &no);
	//printf("%d", armstrong(no));
	printf("%d", prime(no));
	

}
