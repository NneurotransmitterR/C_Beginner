#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0, j = 0, k = 0;
	int a[12][12] = {1};          //初始化二维数组
	int n = 0;
	while ( n < 1 || n > 12 ) {
		printf("请输入杨辉三角的行数，不超过12行：\n");
		scanf("%d", &n);
	}
	for ( i = 1; i < n; i++ ) {    
		a[i][0] = 1;        //第一列置为1 
		for ( j = 1; j <= i; ++j ) 
			a[i][j] = a[i-1][j-1] + a[i-1][j]; //肩上两数之和 
	}                                              //构造杨辉三角
	for ( i = 0; i < n; i++) {
		for ( k = 0; k < n-i-1 ; k++ )
			printf("  ");                    //构造三角状
		for ( j = 0; j <= i; j++) 
			printf("%4d", a[i][j]);
		printf("\n");
	}                                              //输出杨辉三角
	return 0;
} 
