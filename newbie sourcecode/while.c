#include <stdio.h>
#include <math.h>


int main()
{

   int i=0;
   int a=0;
   
   printf("��������������:");
   scanf("%d", &a);
//ע���������У�����һλ���ֵ��жϺ���Ҫ���� 
   i++;
   a = a/10;
   
//����������ʱ������ѭ���� 
   while (a!=0){
   	a /= 10;
   	i++;
   }
    
    printf("�������ֹ���%dλ\n", i);
    
    

	




 

return 0;

}
