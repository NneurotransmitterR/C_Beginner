#include <stdio.h>

int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int number[100];
	scanf("%d", &x);
	while (x != -1){
		number[cnt] = x;
		sum += x;
		cnt ++;
		if(cnt>100) break; 
		scanf("%d", &x); 
		
	}
	if (cnt > 0){    //���� 
		printf("%f\n", sum/cnt);
		int i;
		for (i=0; i<cnt; i++){
			if (number[i] > sum/cnt){
				printf("%d\n", number[i]);
			}
		}
	}
	//���������Σ�յģ�Ҫע������ĸ������ܳ��������С�� 
	
    return 0;
 } 
