#include <stdio.h>
//���ǰ50������
int main()
{

 int count=1;
 int isprime=1;
 int x=2;
 int i;
 while(count<51){
 	 isprime = 1; //x������ 
	 
 		for (i=2; i<x; i++){
 			if (x%i==0){
			     isprime=0;
			     break;
			}
	   } //���forѭ����������x�Ƿ�Ϊ�������������г�1�ͱ���֮������ӣ��򽫿��Ʊ���isprime��ֵΪ0. 
			if (isprime==1){
			printf("%d ", x);
 		    count ++;
		    }
		x++;   
		    
		
		 }
 		
 		
	  
 	
 	
 
 
 return 0;
}
