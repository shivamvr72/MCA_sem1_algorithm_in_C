#include <stdio.h>
int orbitfun(int m, int n){
	static int x=1;
	int nmod;
	printf("%d", nmod);
	x*=2;
	nmod = ((x*m)%n);
	if(nmod==0){
		return 0;
	}
	printf("pow = %d\n", x);
	printf("m1= %d x1= %d n1= %d\n", m, x, n);
	orbitfun(m, n);
}
int main(){
	int m=5, n=8;
	orbitfun(m,n);
return 0;
}
