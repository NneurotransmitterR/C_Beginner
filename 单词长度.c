#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[100];
    int i;
    int n=1;
    do
    {
        char c='.';
        scanf("%s", sentence);        //多出的东西交给下一个scanf 
        i=(int)strlen(sentence);
        if(sentence[i-1]==c){
		    if(i>1){
               printf("%d\n",i-1);
            }
             
            n=0;
        }
        else{
            printf("%d ",i);
        }
    }while(n);
	
	
	return 0;
 } 
