#include <stdio.h>

int main()
{
   //��ʼ�� 
   int amount = 100;
   int price = 0;
   
   //�������Ʊ�� 
   printf("�������Ԫ��");
   scanf("%d", &price); 
   
   printf("������Ʊ�棨Ԫ��");
   scanf("%d", &amount) ;
   //�������� 
   int change = amount - price;
   
   //�ж��Ƿ���� 
   if (change>=0) 
   {
   
       printf("����%dԪ��\n", change);
  
  
   }else{
   
   
       printf("���㣡��֧��ʣ���%dԪ��\n", price - amount); 
    }
   



return 0;

}
