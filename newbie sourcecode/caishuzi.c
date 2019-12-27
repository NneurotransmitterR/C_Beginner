#include <stdio.h>

int main()
{

  int i;
  int n;
  
  printf("请输入预设数字：");
  scanf("%d", &n);
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
  printf("请选手输入心中想的数字:");
  scanf("%d", &i); 
  
  if (i == n) {printf("恭喜你答对了！\n");   /*  注意这儿是==不是= */ 
  }else{
  	    
  	    
  	    while(i!=n){   
  	                if(i>n){printf("大了，请重试\n");}
					if(i<n){printf("小了，请重试\n");}
					scanf("%d", &i);
					  
		           
				   }

        printf("你猜对了！答案就是%d!\n", n);
  } 




















return 0;
}






 
