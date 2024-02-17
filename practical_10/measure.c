#include <stdio.h>

int convert(float ft){
	float inch, cm, mt;
	inch = ft*12;
	printf("Inches:%.2f\n", inch);
	cm = inch*2.54;
	printf("Centimeter:%.2f\n", cm);
	mt = cm*1/100;
	printf("Meter:%.2f\n", mt);
	
	return 0;
}

int main(){
	float feet;
	printf("Enter Feet: ");
	scanf("%f", &feet);
	convert(feet);
	return 0;
}
