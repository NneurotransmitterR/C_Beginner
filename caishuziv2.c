#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{    
    srand(time(0));
    int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("���Ѿ������һ��1��100֮���������");
	
	do{
		printf("�²����������ʲô��");
		scanf("%d", &a);
		count ++;
		if(a>number){
			printf("���ˡ�"); 
		} else if(a<number){
			printf("С�ˡ�"); 
		}
		
		
	}while (a!=number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸣�\n", count); 
	
	system("pause");
    return 0;	
}
