//用二维数组和指针变量作为函数参数，编程打印３个班学生的某门课程成绩的最高分，并指出具有该最高分成绩的学生是第几个班的第几个学生。
/*输入：
    第一行：整型数字，换行符结束，表示每个班级的人数，如"2"
    第二行：班级1的学生成绩，空格符分隔
    第三行：班级2的学生成绩，空格符分隔
    第四行：班级3的学生成绩，空格符分隔
输出："maxScore=XX,class=Y,number=Z"
*/ 
#include <stdio.h>
#define CLASS 3
#define ARR_SIZE 40
int FindMax(int *p,int n, int m,int *pRow,int *pCol);
int main() {
	
	int score[CLASS][ARR_SIZE]={0},i,j,n,maxScore,row,col;
	int *p=&score[0][0];
	scanf("%d",&n);
	for(i=0; i<CLASS; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&score[i][j]);
		}
	}  
	maxScore=FindMax(p,n,CLASS,&row,&col);
	printf("maxScore=%d,class=%d,number=%d\n",maxScore,row+1,col+1);
}
int FindMax(int *p,int n, int m,int *pRow,int *pCol) {
	int i,j,maxScore;
	maxScore=*p;
	*pRow=0;
	*pCol=0;
 	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(*p>maxScore) {
				maxScore=*p;
				*pRow=i;
				*pCol=j;
			}
			if (j<n-1) {
				p++;
			}else {
				p = p + ARR_SIZE - n + 1;
			}
		}
	}
	return(maxScore);
}
