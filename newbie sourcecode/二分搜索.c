#include <stdio.h>

//！！前提：数组已单调排序。 

int search(int key, int len, int a[]);
int main()
{   
    int i;
    int a[10]={0};
    printf("请按序输入一个十个元素的数组："); 
    for(i=0; i<10; i++){
    	scanf("%d", &a[i]);
	}
    int key;
    printf("请输入您要查找的数字："); 
	scanf("%d", &key);
	
	int location = search(key, sizeof(a)/sizeof(a[0]), a);
	
	if(location == -1){
		printf("没找到！\n");
	}else{
		printf("%d在第%d个位置上。\n", key, location+1);
	}
	
	return 0;
}

int search(int key, int len, int a[])
{    
    int ret=-1;
    int left=0;
    int right=len-1;
    while(left<right)
    {
    	int mid=(left+right)/2;
    	if (a[mid]==key)
    	{
    		ret=mid;
    		break;
		}else if(a[mid]>key)
		{
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return ret;
}
 
