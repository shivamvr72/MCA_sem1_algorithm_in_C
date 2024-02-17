#include <stdio.h>
float diameter(float r){
	float dm = 2*r;
	return dm;
}
float cms(float r){
	float cf = 2*3.14*r;
	return cf;

}
float area(float r){
	float a = 3.14*(r*r);
	return a;
}
int main(){
	float radius;
	printf("Enter radius : ");	
	scanf("%f", &radius);
	printf("Diameter : %f\n", diameter(radius));
	printf("Cicumference : %f\n", cms(radius));
	printf("Area : %f\n", area(radius));

	return 0;
}
