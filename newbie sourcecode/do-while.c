#include <stdio.h>
#include <math.h>


int main()
{
    int i=0;
    int a=0;
    
    printf("��������������:");
    scanf("%d", &a);
//�Ƚ���ѭ���壬�����������������ѭ����    
    do{
    	a /= 10;
    	i++;
	}while(a!=0);
	
	printf("�������ֹ���%dλ\n", i);

	




     
       return 0;

}
