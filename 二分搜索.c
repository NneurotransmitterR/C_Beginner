#include <stdio.h>

//����ǰ�᣺�����ѵ������� 

int search(int key, int len, int a[]);
int main()
{   
    int i;
    int a[10]={0};
    printf("�밴������һ��ʮ��Ԫ�ص����飺"); 
    for(i=0; i<10; i++){
    	scanf("%d", &a[i]);
	}
    int key;
    printf("��������Ҫ���ҵ����֣�"); 
	scanf("%d", &key);
	
	int location = search(key, sizeof(a)/sizeof(a[0]), a);
	
	if(location == -1){
		printf("û�ҵ���\n");
	}else{
		printf("%d�ڵ�%d��λ���ϡ�\n", key, location+1);
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
 
