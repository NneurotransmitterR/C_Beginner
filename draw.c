#include <stdio.h>
#include <stdlib.h>

void draw(int n);
int main()
{
	int n = 10;
	draw(n);
	return 0;
 } 
 
void draw(int n)
 {
 	int i,j;
 	for(i=1-(n>>1); i<-n; i++){
 	    if(i>=0){
 	    	for(j=0; j<1; j++){
 	    		printf(" ");
			 }
			for(j=1; j<-2*(n-i)+1; j++){
				printf("*");
			}
			printf("\n");
		 }else{
		 	 for (j=i; j<0; j++){
		 		printf("*");
			 }
			 for(j=1; j<=-1-2*i; j++){
			 	printf("*");
			 }
			 for(j=1; j<=n+2*i+1; j++){
			 	printf(" ");
			 }
			 for(j=1; j<=n+2*i+1; j++){
			 	printf("*");
			 }
			 printf("\n");
		 }
	 }
 	
 	getchar();
 	
 }
