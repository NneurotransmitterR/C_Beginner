#include <stdio.h>
int factor(int );
int main() {
    
    int i=1, m;
    double s=0; 
    scanf("%d", &m);
//    label:
/*if*/	while (i<=m) {
		 if (i%2==0) {
		      s=s-1.0/factor(i);  //注意浮点运算。 
	           }else{ 
	             s=s+1.0/factor(i);		
	            } 
        ++i;
//        goto label;
        }/*else{*/
    	printf("%f", s);
	


    return 0; 
} 

int factor(int n) {
    if (n>1) return n*factor(n-1);
    
    return n; 
    //递归调用 计算n！ 
}

