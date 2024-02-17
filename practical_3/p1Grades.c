#include <stdio.h>
int main(){
	float pc;
	printf("Enter percentage for Grade: ");
	scanf("%f", &pc);
	if(pc<=100 && pc>80){
		printf("A Grade\n");
	}else if(pc>60 && pc<=80){
		printf("B Grade\n");
	}else if(pc>45 && pc<=60){
		printf("C Grade\n");
	}else if(pc>=0 && pc<=45){
		printf("Failed\n");
	}else{
		printf("Something wrong!!");
	}
return 0;
}
