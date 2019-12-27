#include <stdio.h>
#include <math.h>


int main()
{
//本程序计算n! 
   
   int n=1;
   int i=1;
   int pi=1;
   
   printf("请输入n的值：");
   scanf("%d", &n); 


     

//for (初始条件; 循环继续的条件;  循环内容){} 
   
   for (i=1; i<=n; i++){
   	pi=pi*i; /* pi*=i */ 
   }

   printf("%d!=%d\n", n, pi);


return 0;

}
