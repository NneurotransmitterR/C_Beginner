#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{    
    srand(time(0));
    int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想好了一个1到100之间的整数。");
	
	do{
		printf("猜猜这个数字是什么？");
		scanf("%d", &a);
		count ++;
		if(a>number){
			printf("大了。"); 
		} else if(a<number){
			printf("小了。"); 
		}
		
		
	}while (a!=number);
	printf("太好了，你用了%d次就猜到了答案！\n", count); 
	
	system("pause");
    return 0;	
}
