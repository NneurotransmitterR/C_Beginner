#include<stdio.h>
/*找出key在数组a中的位置
key 要寻找的数字
a 要寻找的数组
length 数组a的长度
return 若找到返回位置，若找不到返回-1    
*/	
	
	int search(int key, int a[], int length); 
    
	int main()
{
	printf("请输入一个10个数的一维数组：");
    int a[10];
	int i;
	for (i=0; i<10; i++){
		int n;
		scanf("%d", &n);
		a[i]=n;
	} 
    int x;
    int loc;
    printf("请输入要查找的数字：");
	scanf("%d", &x);
	loc=search(x, a, sizeof(a)/sizeof(a[0])); 
	if (loc != -1 ){
		printf("%d在第%d个位置上。\n", x, loc+1);
	}else{
		printf("%d不存在！\n");
	}
	
	return 0;
 } 
 
    int search(int key, int a[], int length)
{
	int ret=-1;
	int i=0;
	for(i=0; i<length; i++){
		if(a[i]==key){
			ret = i;
			break;
		}
	}
	return ret;
}    
