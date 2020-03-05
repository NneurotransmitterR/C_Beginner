
#include <stdio.h>

//二分法求一个零点在闭区间[0,1]上  
//f(x)=x^3-x^4+4x^2-1  f(0)=-1<0, f(1)=3>0;
//double zeropoint(double , double );

//IT IS JUST A POSSIBLE VERSION!!!
double f(double );

int main(){
    double head=0.0, foot=1.0;	
            /*f-        f+*/
    
	do{
	
	if (f((head+foot)/2) < -1e-6) {             /*这里的大于/小于号取决于原始区间端点的函数值的正负。依赖于f在[0,1]上递增的性质。 */ 
	    head = (head+foot)/2;                   /**/ 
	}else if(f((head+foot)/2) > 1e-6) {
	    foot = (head+foot)/2;
		}
	
   }while( foot-head > 1e-6) ; 
	
	printf("%f", (head+foot)/2);
	return 0;
} 



double f(double x) {
	double y=x*x*x-x*x*x*x+4*x*x-1;
	return y;
}
