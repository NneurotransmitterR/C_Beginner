#include <stdio.h>
#include <math.h>


int main()
{
//���������n! 
   
   int n=1;
   int i=1;
   int pi=1;
   
   printf("������n��ֵ��");
   scanf("%d", &n); 


     

//for (��ʼ����; ѭ������������;  ѭ������){} 
   
   for (i=1; i<=n; i++){
   	pi=pi*i; /* pi*=i */ 
   }

   printf("%d!=%d\n", n, pi);


return 0;

}
