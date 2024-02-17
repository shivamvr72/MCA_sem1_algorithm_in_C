#include <stdio.h>
int main(){
	int ch;
	ch = getchar();
	putchar(ch);
	ch++;
	putchar(ch);
	ch-=6;
	putchar(ch);
	
	
	//this is also can produce output same as above its keyed character
	int ch1;
	putchar(ch1=getchar());
	return 0;
//	putchar("%d\n",ch); //can't do this cz it input only one character and output one and here we gave too many

return 0;
}
