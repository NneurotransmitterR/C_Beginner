#include<stdio.h>
/*�ҳ�key������a�е�λ��
key ҪѰ�ҵ�����
a ҪѰ�ҵ�����
length ����a�ĳ���
return ���ҵ�����λ�ã����Ҳ�������-1    
*/	
	
	int search(int key, int a[], int length); 
    
	int main()
{
	printf("������һ��10������һά���飺");
    int a[10];
	int i;
	for (i=0; i<10; i++){
		int n;
		scanf("%d", &n);
		a[i]=n;
	} 
    int x;
    int loc;
    printf("������Ҫ���ҵ����֣�");
	scanf("%d", &x);
	loc=search(x, a, sizeof(a)/sizeof(a[0])); 
	if (loc != -1 ){
		printf("%d�ڵ�%d��λ���ϡ�\n", x, loc+1);
	}else{
		printf("%d�����ڣ�\n");
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
