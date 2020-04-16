/*编写函数void fun(int y,int b[],int * m)，
它的功能是：求出1-100中能整除y且是奇数的各整数，
并按从小到大的顺序放在b所指的数组中，
除数的个数通过形参m返回。 
在main中调用该函数求出能整除5且为奇数的整数信息
*/ 
#include<stdio.h>
void fun();
int main()
{
	int b[100]={0};
	int number=0;
	int* m=NULL;
 	m=&number;
	int i,y;
	scanf("%d", &y);        //y=5
  fun(y, b, m);
  for(i=0;i<*m;i++)
	printf("%d ",b[i]);
	printf("共%d个",*m);
	return 0;
} 

void fun(int y,int b[],int* m)
{
    int t,num=0;
		for(t=1;t<100;t=t+2)
		{
			if (t%y==0 && t>=y) {
				num++;
				b[num-1]=t;
		    }
		 }
		 *m=num;          		 
}
