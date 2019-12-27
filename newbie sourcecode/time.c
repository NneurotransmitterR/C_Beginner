#include <stdio.h>
#include <math.h>

int main()
{
   int hour1, minute1;
   int hour2, minute2;
   
   printf("请按“小时 分钟”的形式依次输入两组时间"); 
   
   scanf("%d %d", &hour1, &minute1);
   scanf("%d %d", &hour2, &minute2);
   
   int t1 = hour1 * 60 + minute1;
   int t2 = hour2 * 60 + minute2;
   
   int t = abs(t2 - t1);
   
   printf("时间差是%d小时%d分。", t/60, t%60); 
//   t/60整型运算输出小时部分，t%60取余输出分钟部分 



}
