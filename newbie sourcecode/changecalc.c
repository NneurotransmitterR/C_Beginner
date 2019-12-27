#include <stdio.h>

int main()
{
   //初始化 
   int amount = 100;
   int price = 0;
   
   //读入金额和票面 
   printf("请输入金额（元）");
   scanf("%d", &price); 
   
   printf("请输入票面（元）");
   scanf("%d", &amount) ;
   //计算找零 
   int change = amount - price;
   
   //判断是否足额 
   if (change>=0) 
   {
   
       printf("找您%d元。\n", change);
  
  
   }else{
   
   
       printf("金额不足！请支付剩余的%d元。\n", price - amount); 
    }
   



return 0;

}
