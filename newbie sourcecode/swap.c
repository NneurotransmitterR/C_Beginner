#include <stdio.h>
//���������ĺ���

void swap(int *x, int *y);
int main(){
	int a, b;
	printf("������a��b��ֵ��"); 
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
