#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 
int main()
{
	char string[1005];
	char *a[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int i,n;
	char c;
	scanf("%s",string);
	if(string[0]=='-')
		printf("fu");
	else
	{
		n=string[0]-'0';
		printf("%s",a[n]);
	}
	for(i=1;i<strlen(string);i++)
	{
		n=string[i]-'0';
		printf(" %s",a[n]);	
	}
	return 0;
} 
