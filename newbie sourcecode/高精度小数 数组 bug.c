#include <stdio.h>
 

 
int main(int argc, char** argv) {
	int a,b;
	int div,i;        //divΪ��������dis�洢��� 
	int dis[200];
	
	scanf("%d/%d",&a,&b);
	div=a;
	for(i=0;i<200;i++)
	{
		dis[i]=div*10/b;
		div=div*10%b;
		if(div==0) break;      //����Ϊ0ʱ���� 
	}
 
	printf("0."); 
	int j=0;
	for(j=0;j<=i;j++){
	printf("%d",dis[j]);
    }     
	
	return 0;
}
