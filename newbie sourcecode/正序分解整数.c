#include <stdio.h>
//正序分解整数
//12435   1 2 4 3 5 
int main()
{
	int x;
	scanf("%d", &x);
//下面为逆序输出的代码。但在本例中不好用。	
/*	int t=0; //t用来暂存x的“逆序 ” 
	do{
		int d = x%10;  //提取x最后一位 
		t = t*10 + d;    //将该轮提取的x的最后一位按正序排列。如 5~ 5，3~ 50+3=53 ......1~ 5342*10+1 
		x /= 10;        //去掉x最后一位 
		//划重点 
	}while(x>0);
	printf("t=%d\n", t);
*/	
    int cnt = 0;
    int t = x;
    int mask = 1;
    while(t>9) {
    	t /= 10;
    	mask *=10;
	}
    
	do{
    	int d = x/mask;
    	printf("%d", d);
    	if (mask>9){
    		printf(" ");
		}
    	x %= mask;
    	mask /= 10; 	
    }while(mask>0);
    
    printf("\n");
    	
    	
    	
    	
    return 0;	
	}

