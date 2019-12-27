#include <stdio.h>
#include <math.h>


int main()
{

   int i=0;
   int a=0;
   
   printf("请输入您的数字:");
   scanf("%d", &a);
//注意下面两行，对于一位数字的判断很重要！！ 
   i++;
   a = a/10;
   
//当满足条件时，进入循环。 
   while (a!=0){
   	a /= 10;
   	i++;
   }
    
    printf("您的数字共有%d位\n", i);
    
    

	




 

return 0;

}
