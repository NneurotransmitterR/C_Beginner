//约瑟夫环的数组实现
//情景：n个人围成一圈（先编号为123...n)，从第一个人开始1.2...m地报数，报到m的人即刻出列
//问出圈的顺序以及剩下的人的编号。 
#include <stdio.h>
#include <stdlib.h> 
//not using c99 
int main() {

      int m = 0;
      int n = 0;
      int i = 0;
      int j = 0; 
      int k = 1;
      int* a = NULL;
         
      printf("请输入总人数n：\n");
      scanf("%d",&n);
	    printf("请输入报的数m：\n");
	    scanf("%d",&m);

      
	    a = (int*)malloc(n*sizeof(int));      /*实现c99中int a[n]*/

      for(i=0; i<n; i++)  a[i]=i+1;         /*初始编号 */ 
      
      /*******************/ 
      while (n>1) {

          i=(i+ m-1 )%n;                      /*!!!这个公式至关重要，用于算出出列的位置!!!*/ 
		      printf("第%d个出列的是%d号\n", k, a[i]);
		      for(j = i+1; j < n; j++)   a[j-1] = a[j];      /*把出列的“踢出”数组，后面的补上*/ 
          n--;
          k++;
          if(i == n)  i = 0;

      }
      /*******************/ 
      
      printf("最后剩下的是%d号\n", a[i]);
      free(a);
      return 0;

}

//参考： https://www.cnblogs.com/Mr--Yang/p/6391554.html
