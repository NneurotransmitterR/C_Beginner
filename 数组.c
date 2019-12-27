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
	if (cnt > 0){    //遍历 
		printf("%f\n", sum/cnt);
		int i;
		for (i=0; i<cnt; i++){
			if (number[i] > sum/cnt){
				printf("%d\n", number[i]);
			}
		}
	}
	//这个程序是危险的，要注意输入的个数不能超过数组大小。 
	
    return 0;
 } 
