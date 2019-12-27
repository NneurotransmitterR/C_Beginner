#include<stdio.h>
int main()
{
	int S=0;
	int i=1;
	int n;
	scanf("%d", &n);
	for (S=0, i=1; i<=n, S<=10; i++){
		S += i;
	}
	
	printf("%d\n", S);
	
	
	return 0;
 } 
