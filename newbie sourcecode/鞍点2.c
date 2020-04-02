//鞍点指的是方阵中，为所在行最大且所在列最小的元素（如果有）。
#include<stdio.h>
 
int main() {
	int n = 4;
	int a[4][4], b[4][4];
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int row[4], colum[4];
    for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
 
			row[i] = a[i][j];
			if (row[i] <= a[i][j])
				row[i] = a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			b[j][i] = a[i][j];
		}
	}
 	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
 
			colum[i] = b[i][j];
			if (colum[i] >= b[i][j])
				colum[i] = b[i][j];
		}
	}
	for (i = 1; i <= n; i++) {
		if (row[i-1] == colum[i-1])
			printf("Point in %d line:%d\n",i, row[i-1]);
		else
			printf("No Point in %d line.\n",i);
	}
	return 0;
}

