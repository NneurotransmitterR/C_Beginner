#include <stdio.h>
//本程序实现输出100以内的素数。 
int main()
{
   int x;
   for (x=2; x<100; x++)
   {
   	    int i;
   	    int isprime=1;   //x是素数
		for (i=2; i<x; i++){
			if (x%i==0){
				isprime=0;
				break;
			}
		} 
		if (isprime==1){
			printf("%d ", x);
		}
   	
   	
	} 
	printf("\n");



return 0;
 } 
