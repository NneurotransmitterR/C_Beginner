#include <stdio.h>
int main(int argc, char **argv){
    double a;   
    scanf("%lf", &a);	    	
    long long b = a;
    int c=1;    	
    int i = 0, j = 0;
    while (b >= 10) {
	b /= 10;
	c++;               		//整数部分有几位 
	}
    if (c > 8 || b < 0){         //防止超过long long int最大值时出现的问题 (?)
	printf("[%.3f]\n[%.3f]\n[%.3f]\n[%.3f]\n", a, a, a, a);
    } else {
	    printf("[%.3f]\n", a);
	    printf("[%-12.3f]\n", a);       //左对齐 
	    printf("[");
    	    for (; i<(12-4-c)/2; i++)
		printf(" ");   
    	    printf("%.3f", a);
   	    for (; j<(12-4-c-i); j++)
    		printf(" ");
    	    printf("]\n");                 //居中对齐 
	    printf("[%12.3f]\n", a);      //右对齐 
    }
    return 0;
}
