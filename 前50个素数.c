#include <stdio.h>
//输出前50个素数
int main()
{

 int count=1;
 int isprime=1;
 int x=2;
 int i;
 while(count<51){
 	 isprime = 1; //x是素数 
	 
 		for (i=2; i<x; i++){
 			if (x%i==0){
			     isprime=0;
			     break;
			}
	   } //这个for循环用来检验x是否为素数。若它具有除1和本身之外的因子，则将控制变量isprime赋值为0. 
			if (isprime==1){
			printf("%d ", x);
 		    count ++;
		    }
		x++;   
		    
		
		 }
 		
 		
	  
 	
 	
 
 
 return 0;
}
