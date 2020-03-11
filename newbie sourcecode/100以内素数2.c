//给出求100以内素数的另一种方法。bywsc（不用控制变量isprime） 
#include<stdio.h>
int main()
{
   int i,j,k=0;
   for(j=2;j<100;j++) {
     
	 for(i=2;i<j;) {
	 if(j%i!=0) i++; 
	 else break;          //若j被i整除了，则j是合数，不用再验证j能被其他数整除与否，于是跳出循环。 
     }
     
	 if(i==j) {         //若j是素数，上面的for循环会执行到i=j为止。于是输出j。 
       printf("%d ",j); k++;
     }
    
   }
   
   printf("\n总共%d个素数",k);



return 0;
}
