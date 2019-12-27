#include <stdio.h>


	int main()
	{
	int z=0,x=0,y=0;
	int i=1;
	scanf("%d/%d",&x,&y);
	printf("0.");
	do
	{
	x=x*10;
	int z=x/y;
	x=x%y;
	printf("%d",z);
	i++;
	}while(i<201&&x!=0);
	return 0;
	}

