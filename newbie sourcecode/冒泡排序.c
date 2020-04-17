//冒泡排序（从小到大）
/* 1.将相邻两数比较，较小的数“往上冒”（换到前面），分别比较第1与第2（若1大于2则交换），第2与第3......第n-1与n【第一趟冒泡】
    这一趟最后一个数就是最大的数。 
   2.以此类推，对余下n-1个数进行冒泡。 
   时间复杂度 O{n^2) 
*/ 
#include <stdio.h>
int main() {
/*std=c99下使用变长数组，非c99请使用malloc*/
    int n=10;
    printf("请输入你的数组长度：");
    scanf("%d", &n);
    int a[n];
	  int i=0, j=0, t=0;
	  printf("请输入数组元素，用空格隔开：");
	  for (i=0; i<n; i++)
	      scanf("%d", &a[i]);
	
	  for (j=1; j<=n-1; j++) {           //n-1趟冒泡 
		  for (i=0; i<=n-1-j; i++) {
			  if(a[i]>a[i+1]) {
				  t=a[i];
				  a[i]=a[i+1];
				  a[i+1]=t;
			  }
		  }
	 } 
	
	for (i=0; i<n; i++)
	    printf("%d ", a[i]);
	
	return 0;
} 
