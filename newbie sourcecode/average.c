#include <stdio.h>

int main()
{
	double a,b;

	scanf("%lf %lf", &a, &b);

	double c = (a+b)/2;
	
	printf("%f��%f��ƽ��ֵ=%f\n", a, b, c);

	return 0;
}