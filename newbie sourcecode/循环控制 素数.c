#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int isprime = 1; 
	scanf("%d", &x);
	
	for(i=2; i<x; i++){
	   if (x%i == 0){
	   	 isprime = 0;
	   	 break;    /* break:����ѭ��    continue��������ǰѭ���������һ��ѭ��*/ 
	   }
}
    if (isprime == 1){
    	printf("������\n"); 
	}else{
		printf("��������\n"); 
	}
	
	return 0; 
 } 
