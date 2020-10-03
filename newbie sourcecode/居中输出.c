#include <stdio.h>
#include <stdlib.h>
void fun(void);
int main(){
    fun();
    return 0;
}
void fun(){
	//居中输出，当数据宽度为奇数时后面空格多。 
	  double a;   
    char ch1 = 91, ch2 = 93;
    scanf("%lf", &a);	    	//123.45678
	  int b = (int) a, c=0;    	//整数部分
	  int i = 0, j = 0;
	  while (b) {
		  b/=10;
	 	  c++;               		//整数部分有几位 
	  }
	  if (c > 9) {
		  printf("bad input\n");
		  exit(1);
	  }
	  printf("%c", ch1);          //打印[ 
    for (; i<(12-3-c)/2; i++)
		  printf(" ");            //打印空格 
    printf("%.3f", a); 			//打印数据 
    for (; j<(12-3-c-i); j++)
    	printf(" ");			//打印空格 
    printf("%c\n", ch2);		//打印] 
}

/*测试用例I/O
123.4567890		[   123.457   ]\n
99				[   99.000    ]\n
1428.571		[  1428.571   ]\n
9666512242.4866231		bad input\n
*/
