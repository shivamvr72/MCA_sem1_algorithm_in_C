#include <stdio.h>
int main(){
	int size, lwtri=1, uptri=1;
	printf("Enter size of matrix : ");
	scanf("%d", &size);
	for(int i=0; i<size;i++){
		for(int j=0; j<size;j++){
			int v;
			printf("enter matrix element: ");
			scanf("%d", &v);
			if(j<i && v!=0 && uptri){
				uptri=0;
			}else if(j>i && v!=0 && lwtri){
				lwtri=0;
			}
		}
	}
	
	(lwtri || uptri)?printf("Yes\n"):printf("no\n");
return 0;
}
