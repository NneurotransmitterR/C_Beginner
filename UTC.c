#include <stdio.h>
#include <math.h>

//本程序实现BJT到UTC的转换。 
int main()
{
    int BJT;
    int UTC;
    int H;
    
    scanf("%d", &BJT);
    
    int h = BJT / 100;
    int m = BJT % 100;
    
    if(h >= 8){
    	UTC = BJT - 800;
	}else{
		H = 16 + h;
		UTC = H*100 + m;
	}
	
    printf("%d", UTC);



     
       return 0;

}
