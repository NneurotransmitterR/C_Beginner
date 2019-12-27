#include <stdio.h>
//交换变量的函数

void swap(int *x, int *y);
int main(){
	int a, b;
	printf("请输入a和b的值："); 
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);
	return 0; 
} 
void swap(int *x, int *y){
	int temp;
	temp=*y;
	*y=*x;
	*x=temp;
}
