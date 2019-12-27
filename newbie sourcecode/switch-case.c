//多路分支（switch-case） 
#include <stdio.h>
int main()
 {
 	int type;
 	
 	scanf("%d", &type);
 	
 	switch (type) {
 		case 1:
 			printf("你好\n");
			break;  /*如果没有break，程序会往下走直到遇到break*/ 
		case 2:
		    printf("早上好\n");
			break;
		case 3:
		    printf("晚上好\n");
			break;
		case 4:
		    printf("再见\n");			  
 	        break;
 	    default:
 	    	printf("啊，什么啊？\n");
 	    	break;
	 }
 	
//注意：switch-case必须是整型 
 	
return 0; 	
  } 
