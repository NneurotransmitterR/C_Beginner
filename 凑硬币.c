#include <stdio.h>
//凑硬币 
int main()
{
  int x; //单位元 
  int one, two, five; //单位角 
  int exit=0;
  scanf("%d", &x);
  for (one=1; one<x*10; one++){
  	for (two=1; two<x*10/2; two++){
  		for (five=1; five<x*10/5; five++){
  			if (one+two*2+five*5==x*10){
  				printf("%d个一角加%d个二角加%d个五毛总共%d元。\n", one, two, five, x);
  				//exit=1;
				//break; 
				goto out; 
			  }
		  }
		  //if (exit) break; //if不是0就是true。 
	  }
	  //if (exit) break;
  }
    
    
  out:
    
  return 0;	
 } 
