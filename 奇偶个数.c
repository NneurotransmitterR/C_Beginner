#include <stdio.h>
//��ĳ���Ҫ����һϵ�����������ݣ�����-1��ʾ���������-1��������������ݡ�������������������е�������ż���ĸ�����

int main()
{
	int n;
	int even=0;
	int odd=0;
	scanf("%d", &n);
	if(n!=-1){
	
	do{
		if(n%2 == 0) {
			even++;
		}else{odd++;}
		
		
		scanf("%d", &n) ;
		
		
	}while(n!=-1);
	

}

printf("%d %d", odd, even);




return 0;
}

