#include<stdio.h>
#include <string.h>
void sd(float (*p)[4]);
int main() {
	int i,j;
	float a[3][4];
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			scanf("%f",&a[i][j]);
	float (*p)[4];
	for(i=0,p=a; i<=2; i++)
		sd(p+i);
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++)
			printf("%.2f,",a[i][j]);
		printf("\n");
	}
}
void sd(float (*p)[4]){
	int i;
	float s;
	s=**p;
	for(i=0; i<4; i++)
		if(*(*p+i)>s)
			s=*(*p+i);
	for(i=0; i<4; i++)
		*(*p+i)=*(*p+i)/s;
}
