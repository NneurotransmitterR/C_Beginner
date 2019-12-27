#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int isprime = 1; 
	scanf("%d", &x);
	
	for(i=2; i<x; i++){
	   if (x%i == 0){
	   	 isprime = 0;
	   	 break;    /* break:跳出循环    continue：跳过当前循环体进入下一轮循环*/ 
	   }
}
    if (isprime == 1){
    	printf("是素数\n"); 
	}else{
		printf("不是素数\n"); 
	}
	
	return 0; 
 } 
