#include <stdio.h>

struct cardetail{
	char cname[20];
	int price;
	float milage;
};

int main(){
	struct cardetail c[2];
	for(int i=0; i<2; i++){
		printf("Enter Name of Car %d    : ", i+1);
		scanf(" %[^\n]", c[i].cname);
		printf("Enter Price for car %d  : ", i+1);
		scanf("%d", &c[i].price);
		printf("Enter Milage for car %d : ", i+1);
		scanf("%f", &c[i].milage);
	}
	for(int i=0; i<2; i++){
		printf("Name of Car %d  : %s\n", i+1, c[i].cname);
		printf("Price of Car %d : %d\n", i+1, c[i].price);
		printf("Milage of Car %d: %.2f\n", i+1, c[i].milage); 
	}
	return 0;
}
