#include <stdio.h>
#include <math.h>

int main()
{
   int hour1, minute1;
   int hour2, minute2;
   
   printf("�밴��Сʱ ���ӡ�����ʽ������������ʱ��"); 
   
   scanf("%d %d", &hour1, &minute1);
   scanf("%d %d", &hour2, &minute2);
   
   int t1 = hour1 * 60 + minute1;
   int t2 = hour2 * 60 + minute2;
   
   int t = abs(t2 - t1);
   
   printf("ʱ�����%dСʱ%d�֡�", t/60, t%60); 
//   t/60�����������Сʱ���֣�t%60ȡ��������Ӳ��� 



}
