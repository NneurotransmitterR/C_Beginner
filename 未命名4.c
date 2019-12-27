#include <stdio.h>
int maximum(); 
int main()
{
	printf("请输入三个实数，以空格隔开：\n");
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max;
    max=maximum(maximum(maximum(a, b), c));
    printf("%d\n", max);
    
	return 0;
 } 
 
int maximum(int x, int y)
{
	int max;
	if (x>=y) {max=x;}
	else {max=y;}
	return max;
 } 
