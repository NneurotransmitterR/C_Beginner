//编写一个函数output,打印一个学生的成绩数组，该数组中共有5个学生的数据记录，每个记录包括num、name、score[3]，用主函数输入这些记录，用output函数输出这些记录。
#include <stdio.h>
struct student {
	int num;
	char name[10];
	double score[3];
};
void output(struct student *p);
int main() {
	int i;
	struct student mark[5];
	printf("请输入5个学生的记录，一行一个学生：\n");
	for(i=0; i<5; i++) {
		scanf("%d %s %lf %lf %lf", &mark[i].num, &mark[i].name, &mark[i].score[0], &mark[i].score[1], &mark[i].score[2]) ;
	}
	output(mark);
	return 0;
}
void output(struct student *p) {
	int j;
	for (j=0; j<5; j++) {
		printf("%d %s %f %f %f\n", (*(p+j)).num, (*(p+j)).name, (*(p+j)).score[0], (*(p+j)).score[1], (*(p+j)).score[2]);
	}
}
