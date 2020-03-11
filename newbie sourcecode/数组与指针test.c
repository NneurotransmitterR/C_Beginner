#include <stdio.h>
void fun(int *a);
int main()
{
	int a[]={100,2,3,4,5,6,7,8,9,10,};
	fun(a);
	int *p=a;
	printf("%d\n", *p);  //*p指向a[0]. 
	printf("%p %p\n", &a, &a[0]);
	printf("%d %d\n", p[0], p[3]);      //p[0]指向a[0]. 
    return 0;
} 

void fun(int *a)
{
    for (int i=0; i<10; i++){    //-std=c99 
    	printf("%d ", a[i]);
	} 
	printf("\n");
}	
