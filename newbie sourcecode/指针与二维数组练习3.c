#include <stdio.h>
#include <string.h>
//start
void fsort(char cname[ ][6], int n)
{ int k, j;
 char temp[6];
 for (k=1; k<n; k++)          /*调试时设置断点*/
      for(j=0; j<n-k; j++)
            if (strcmp(*(cname+j), *(cname+j+1))>0)
             {
                strcpy(temp, *(cname+j));
      		    strcpy(*(cname+j), *(cname+j+1));
      		    strcpy(*(cname+j+1), temp);
            }
}
int main()
{
      int i;
      char cname[5][6]={"Wang","Li","Zhang","Jin","Xian"};
//      char (*p)[6]=cname;
      fsort(cname, 5);
      for (i=0; i<5; i++)
      	  printf("%s \n", cname[i]);
      return 0;
    
}	
//end
