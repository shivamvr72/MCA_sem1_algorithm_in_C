#include <stdio.h>
#include <string.h>
 struct student{
 		int id;
 		char name[50];
 		int marks;
 }sneh, shiv, jay;
 
 
 int main(){
 	sneh.id = 1;
 	strcpy(sneh.name, "snehal");
 	sneh.marks= 87;
 	shiv.id = 2;
	strcpy(shiv.name,"shivam");
 	shiv.marks = 87;
 	jay.id = 3;
 	strcpy(jay.name,"jay");
 	jay.marks = 87;
 	printf(" Id of student \t\t %d\n Name of student \t %s\n Marks of strundet \t %d\n\n", sneh.id, sneh.name, sneh.marks);
 	printf(" Id of student \t\t %d\n Name of student \t %s\n Marks of strundet \t %d\n\n", shiv.id, shiv.name, shiv.marks);
 	printf(" Id of student \t\t %d\n Name of student \t %s\n Marks of strundet \t %d\n\n", jay.id, jay.name, jay.marks);
 return 0;
 }
