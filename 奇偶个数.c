#include <stdio.h>
//你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。

int main()
{
	int n;
	int even=0;
	int odd=0;
	scanf("%d", &n);
	if(n!=-1){
	
	do{
		if(n%2 == 0) {
			even++;
		}else{odd++;}
		
		
		scanf("%d", &n) ;
		
		
	}while(n!=-1);
	

}

printf("%d %d", odd, even);




return 0;
}

