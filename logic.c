#include <stdio.h>
//#include <stdbool.h>
//�˳����ж�n�Ƿ�����ĳһ����
 
int main()
{
	int n;
	int result;
	scanf("%d", &n);
	
/*	if (n > 4 && n<10){
	printf("YES");
	
	}else{
		printf("NO\n");
	} 
*/
	result = (n > 4 && n < 10) ? 1:0;
	
	printf("%d\n", result);
	
	
	
	
	
	
	
	
	return 0;
}
