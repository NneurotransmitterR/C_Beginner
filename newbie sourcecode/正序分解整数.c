#include <stdio.h>
//����ֽ�����
//12435   1 2 4 3 5 
int main()
{
	int x;
	scanf("%d", &x);
//����Ϊ��������Ĵ��롣���ڱ����в����á�	
/*	int t=0; //t�����ݴ�x�ġ����� �� 
	do{
		int d = x%10;  //��ȡx���һλ 
		t = t*10 + d;    //��������ȡ��x�����һλ���������С��� 5~ 5��3~ 50+3=53 ......1~ 5342*10+1 
		x /= 10;        //ȥ��x���һλ 
		//���ص� 
	}while(x>0);
	printf("t=%d\n", t);
*/	
    int cnt = 0;
    int t = x;
    int mask = 1;
    while(t>9) {
    	t /= 10;
    	mask *=10;
	}
    
	do{
    	int d = x/mask;
    	printf("%d", d);
    	if (mask>9){
    		printf(" ");
		}
    	x %= mask;
    	mask /= 10; 	
    }while(mask>0);
    
    printf("\n");
    	
    	
    	
    	
    return 0;	
	}

