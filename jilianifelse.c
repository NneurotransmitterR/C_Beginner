//本程序研究级联的if-else
#include <stdio.h>

int main()
{
	
	int x;
	int y;
	printf("x=");
	scanf("%d", &x);
	if (x<-1){
		y = 2*x;
	} else if (x>1) {
		y = -2*x;
	} else {
		y = -2;
	}
	
	printf("y=%d", y);
	
	
	
	
	
	
	
return 0;	
 } 
