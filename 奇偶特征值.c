#include <stdio.h>

//�����������������ֵ����ż������ 
//��ȡ������λ���ֵķ����� ��142857��    142857/1%10=7�� 142857/10%10=5��  142857/100%10=8 
//���ڸ����У�������ȡ��λ���֣�ֻ����ÿ��ѭ���н����һλ��Ĩȥ�� 



int main(){
  int num, a=1, digit=0, count=1;
  scanf("%d", &num);
  do{
  	if((num+count)%2==0){
  		digit = digit + a;
	  }
  count ++;
  num /= 10;   /*!!!*/
  a *= 2;	
  }while(num>0);
  printf("%d", digit);

return 0; 
} 
