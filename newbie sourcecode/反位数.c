#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,t=0;
	scanf("%d",&n);
	if(n<0) {
		printf("数据输入错误！\n");
		exit(0);                      //直接结束程序。
	}
	
  while(n!=0) {
		m=n%10;     //提出个位                                                      例如：输入234   提出4         3            2
		t=t*10+m;   //原来的个位变最高位，以后的个位依次变第二位、第三位....                          0*10+4=4     4*10+3=43    43*10+2=432
		n=n/10;     //原数字除去个位                                                                 23           2            0
	}
	printf("反位数为：%d\n",t);
	return 0;
}
