#include <stdio.h>
int main(){
	int x,y;
	printf("Enter Quadrunt X and Y: ");
	scanf("%d %d", &x, &y);
	if(x>0 && y>0){
		printf("q1\n");
	}else if(x>0 && y<0){
		printf("q2\n");
	}else if(x<0 && y<0){
		printf("q3\n");
	}else if(x<0 && y>0){
		printf("q4\n");
	}else if(x==0){
		printf("on x axis\n");
	}else if(y==0){
		printf("on y axis\n");
	}else{
		printf("something wrong\n");
	}
return 0;
}
