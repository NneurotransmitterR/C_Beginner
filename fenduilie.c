#include <stdio.h>
#include <math.h>
//������ʵ���ҳ�����Ϊ1��ͬѧ�ı�š� 

int main()
{
    int i=1;
    int n=1;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
     if(n%2!=0){
	 	
		
	 	if((i%2)!=0){
    		          if(i<n){
			          printf("%d ", i);}else{
			                                 printf("%d", i);}
			        }
			                                 
			}else{
        
        if((i%2)!=0){
		
    		          if(i<(n-1)){
			          printf("%d ", i);}else{
			                                 printf("%d", i);}			
		            }
                  
				  
				  }
				  
				  
				      }
	
	
	
	
	
	

	




     
       return 0;

}
