#include <stdio.h>
//��Ӳ�� 
int main()
{
  int x; //��λԪ 
  int one, two, five; //��λ�� 
  int exit=0;
  scanf("%d", &x);
  for (one=1; one<x*10; one++){
  	for (two=1; two<x*10/2; two++){
  		for (five=1; five<x*10/5; five++){
  			if (one+two*2+five*5==x*10){
  				printf("%d��һ�Ǽ�%d�����Ǽ�%d����ë�ܹ�%dԪ��\n", one, two, five, x);
  				//exit=1;
				//break; 
				goto out; 
			  }
		  }
		  //if (exit) break; //if����0����true�� 
	  }
	  //if (exit) break;
  }
    
    
  out:
    
  return 0;	
 } 
