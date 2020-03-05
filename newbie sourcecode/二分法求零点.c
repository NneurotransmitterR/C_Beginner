//使用递归调用的一种方法

#include <stdio.h>
double f(double x);
void zeropoint(double a, double b);
int main()
{
	double a=0.0, b=1.0;
    zeropoint(a, b);
    return 0;
}
 
 
double f(double x)
{
	double y=x*x*x-x*x*x*x+4*x*x-1;    /*f(0)<0, f(1)>0*/ 
    return y;
}
void zeropoint(double a, double b)
{   //再次传入的参数已经变成了新的a, b。 
    double mid, result;
    mid = (a + b) / 2;
    result = f(mid)*f(a);        /*若两端点函数值乘积为负，则零点位于这个区间，*否则零点位于另一半区间*/
    
    if(result > 0.000001)
    {
        zeropoint(mid,b);
    }
    else if(result < -0.000001)
    {
        zeropoint(a,mid);
    }
    else
    {
        printf("%lf",mid);
    }
}
