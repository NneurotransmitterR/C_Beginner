#include <stdio.h>

//本程序计算数字特征值（奇偶特征） 
//提取整数各位数字的方法： 如142857：    142857/1%10=7， 142857/10%10=5，  142857/100%10=8 
//但在该例中，不必提取各位数字，只需在每次循环中将最后一位“抹去” 



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
