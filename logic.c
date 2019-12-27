#include <stdio.h>
//#include <stdbool.h>
//此程序判断n是否属于某一区间
 
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
