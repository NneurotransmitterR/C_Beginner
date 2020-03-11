#include <stdio.h>
//辗转相除法求最大公约数
//a  b  t 
//12 18 12
//18 12 6
//12 6  0
//6  0
int main()
{
	int a,b;
	int t;
	int x,y;
	scanf("%d %d",&a, &b);
	x=a;
	y=b;
	
	while (b!=0){
		t=a%b;
		a=b;
		b=t;
	//	printf("a=%d, b=%d, t=%d\n", a, b, t);
	}
	printf("gcd(%d,%d)=%d\n", x, y, a);
return 0;	
}
