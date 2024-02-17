#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#define n 100 //1 good practice to difine array size in symbolic const
int main(){
	/*
	double x[], y[];
	printf("Hello");
	*/
	
	/*
	int n;
	double x[n], y[n];
	scanf("%d",&n);
	printf("%d", n);
	printf("%f", x[0]);
	*/
	
	//int a[n],b[n];//1
	
	//int i =1, j=3, k=2;
	/*
	//int arr[2]=//{5,4,30,7,2};
	int total=0;
	int num[3];
	num[0]=30;
	num[1]=7;
	num[2]=2;
	*/
	//int total = num[0]+num[1]+num[2];
	//printf("%d", total);
	/*
	for(int i=0; i<3; i++){
		total += num[i];
	}
		printf("%d\n", total);
	*/
	
	//printf("%d\n", arr[0]);		
	//printf("%d\n", arr[1]);	
	/*
	//array with loop initialisation
	int n=10;
	int num[n];
	for(int i=0; i<=n; i++){
		num[i]= i*2;
	}
	for(int i=0; i<=n; i++){
		int sum=7;
		sum*=num[i];
		printf("array[%d] = %d \t mul=%d \n",i, num[i]++,sum);
	}
	for(int i=0; i<=n; i++){

		printf("m = %d \t p = %d \t n = %d \n", num[i], num[i]++, num[i]);
	}
	*/
	/*
	//swapping in array
	//int a1;
	int n=0;
	int temp=0;

	printf("size of arrays: ");
	scanf("%d", &n);
	
	int arr1[n];
	int arr2[n];

	for(int i=0; i<n; i++){
		//arr1[i]= i*2;
		//arr2[i]= i*7;
		printf("Enter no for arr1[%d]", i);
		scanf("%d", &arr1[i]);
		printf("Enter no for arr2[%d]", i);
		scanf("%d", &arr2[i]);
	}
	for(int j=0; j<n; j++){
		//printf("a1 = %d  a2= %d\n", arr1[j], arr2[j]);
		temp = arr1[j];
		arr1[j] = arr2[j];
		arr2[j] = temp;
		
		printf("a1 = %d  a2= %d\n", arr1[j], arr2[j]);		
		
	}
	*/
	
	
	//no greater than average from the array
	/*
	int n=0;
	
	printf("Enter size of an array: ");
	scanf("%d", &n);
	
	int narr[n];
	int sum=0;
	int avg;
	
	for(int i=0; i<n; i++){
		printf("Enter no for arr[%d]", i);
		scanf("%d", &narr[i]);
		sum+=narr[i];
	}
	avg = sum/n;
	printf("average %d\n", avg);
	for(int i=0; i<n; i++){
		//printf("size: %lu \n" ,sizeof(narr[i]));
		if(narr[i]>avg){
			printf("Greater than avg : %d \n", narr[i]);
		}
	}
	*/
	
	/*
	//fibbonacci
	int n=0;
	printf("Enter Size of an array: ");
	scanf("%d", &n);
	int fib[n];
	fib[0] = 0;
	fib[1] = 1;
	int sfib = 0;
	for(int i=2; i<n; i++){
		fib[i] = fib[i-2]+fib[i-1];
		printf("%d ",fib[i]);
	}
	*/
	
	/*
	//finding the element position in array
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int earr[n];
	int x=0;
	
	for(int i=0; i<n; i++){
		printf("Enter earr[%d]",i);
		scanf("%d", &earr[i]);
	}
	
	int find;
	printf("Find element: ");
	scanf("%d", &find);
	
	for(int i=0; i<n; i++){
		if(find == earr[i]){
			printf("Found at %d postion:\n", i);
			x=1;
		}
	}
		
	if(x==0){
		printf("not found \n");
	}
	
	*/
	
	/*
	//bubble sorting of an array
	
	int n;
	printf("Enter size of an array: ");
	scanf("%d", &n);
	
	int uarr[n];
	
	for(int i=0; i<n; i++){
		printf("Enter for array[%d]", i);
		scanf("%d", &uarr[i]);
	}
	
	int temp=0;
	for(int j=0; j<n-1; j++){
		for(int i=0; i<(n-j)-1; i++){
			//printf("n= %d \n" ,n);
			if(uarr[i] > uarr[i+1]){
				temp = uarr[i];
				uarr[i] = uarr[i+1];
				uarr[i+1] = temp;
			}
		}
	}
		printf("SHorted array\n");
		for(int i=0; i<n; i++){
			printf("%d\n", uarr[i]);
		}
		
	*/
	/*
	//binary search 
	int n, low, high, mid;
	printf("Enter size of an array: ");
	scanf("%d", &n);
	int barr[n];
	for(int i=0; i<=n ; i++){
		printf("Enter sorted arr[%d]: ", i);
		scanf("%d", &barr[i]);
	}
	//take input to search at index
	int s;
	int f=0;
	printf("In search of : " );
	scanf("%d", &s);
	
	low=barr[0];
	high=barr[n-1];
	
	while(high>=low){
		mid = (low+high)/2;
		if(s==barr[mid]){
			f=1;
			break;
		}else if(s<barr[mid]){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	
	if(f==1){
		printf("found at %d\n", barr[mid]);
	}else{
		printf("not found\n");
	}
	*/
	
	
	/*
	//transpose of matrixes
	int n;
	printf("Enter Size of an array : ");
	scanf("%d", &n);
	int tarr1[n][n];
	int tarr2[n][n];
	
	int row,col;
	printf("Enter Row Size: ");
	scanf("%d", &row);
	printf("Enter col Size: ");
	scanf("%d", &col);

	int val;
	//input for tarr2
	for(int i=0; i<row; i++){
		for(int j=0; j<col ;j++){
			printf("Enter for array[%d] [%d] : ", i+1, j+1);
			scanf("%d", &tarr1[i][j]);
		}
	}
	
	//matrix
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col ;j++){
		printf(" %d", tarr1[i][j]);
		}
		printf("\n");
	}
	printf("Transposed matrix\n");
	//transpose
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			tarr2[i][j] = tarr1[j][i];
		}
	}
	
	//trasopose print
	for(int i=0; i<row; i++){
		for(int j=0; j<col;j++){
			printf(" %d", tarr2[i][j]);
		}
		printf("\n");
	}
	*/	
	
	/*
	//addition of matrises
	int n;
	printf("Enter the size of matrises :");
	scanf("%d", &n);
	
	int row, col;
	printf("Enter row for matrises: ");
	scanf("%d", &row);
	
	printf("Enter col for matrises: ");
	scanf("%d", &col);
	
	int aarr1[n][n];
	int aarr2[n][n];
	
	printf("Input for matrix 1\n");
	//value for 1st matrix
	for(int i=0; i<row; i++){
		for(int j=0; j<col ; j++){
			printf("enter for arr1 [%d] [%d] :", i+1, j+1);
			scanf("%d", &aarr1[i][j]);
		}
	}
	printf("Input for matrix 2\n");
	//input values for 2nd matrix
	for(int i=0; i<row; i++){
		for(int j=0; j<col ; j++){
			printf("enter for arr1 [%d] [%d] :", i+1, j+1);
			scanf("%d", &aarr2[i][j]);
		}
	}
	//output 1st matrix
	printf("1st matrix \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf(" %d", aarr1[i][j]);
		}
		printf("\n");
	}
	//output 2st matrix
	printf("\n2st matrix \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf(" %d", aarr2[i][j]);
		}
		printf("\n");
	}
	
	
	//addition of matrises;
	printf("addition of matrises\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf(" %d", aarr1[i][j]+aarr2[i][j]);
		}
		printf("\n");
	}
	*/
	
	//strings in arrays;
	/*
	//scanf
	char str[50];
	printf("enter string: ");
	scanf("%s", str); //from null it will stop scan
	printf("%lu\n", strlen(str)); //terminate at the null and not require & 
	printf("%s\n", str);
	*/
	
	//scanset conversion 
	//char str1[50];
	//printf("enter string: ");
	/*
	scanf("%[a-z]", str1);
	printf("%s\n", str1);
	*/
	
	/*
	//circumflex character in scanset 
	scanf("%[^\n]", str1); //after ^ (caret) this which ever char is (here \n), it will terminate scanning and call the printf
	printf("%s\n", str1);
	*/
	
	//gets
	/*
	gets(str1);
	printf("str: %s\n", str1);
	*/
	//printf("Enter : %s", gets(str1));
	/*./
	//gets and puts
	gets(str1);
	puts(str1);
	*/
	
	//upper to lower
	char st;
	while((st=getchar( ))!='2\n'){
		if('A'<=st && st<='z'){
			putchar(st+'a'-'A');
		}else{
			putchar(st);
		}
	}
	
	
	
return 0;
}
