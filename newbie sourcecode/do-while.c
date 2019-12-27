#include <stdio.h>
#include <math.h>


int main()
{
    int i=0;
    int a=0;
    
    printf("请输入您的数字:");
    scanf("%d", &a);
//先进入循环体，如果满足条件，继续循环。    
    do{
    	a /= 10;
    	i++;
	}while(a!=0);
	
	printf("您的数字共有%d位\n", i);

	




     
       return 0;

}
