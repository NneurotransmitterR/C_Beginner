#include <stdio.h>

int factorial(int );
int factorial(int n){
	int i;
	if (n==0 || n==1){
		i=1;
	}else{
		i=n*factorial(n-1);
	}
	printf("%d %d\n", i, n);
	return i;
}
/*

 
 
*/ 
int main()
{
	int result, n;
	scanf("%d", &n);
	result=factorial(n);
	printf("%d\n", result);
	
	return 0;
 } 
