#include <stdio.h>
#include <math.h>


int main()
{
    
   int a = 0;
   int b = 0;
   int c = 0;
   int i = 0;
   
   
   
   scanf("%d", &i);

   a = i/100;
   b = (i%100)/10;    //   ��ȡ��λ���е�ʮλ���֣�ע�⵽���ͳ��� 
   c = i%10;
   
   printf("%d\n", c*100+b*10+a );

	
	
   return 0;



}
