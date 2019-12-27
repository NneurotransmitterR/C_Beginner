#include <stdio.h>
//选择排序（升序） 
//每次选出最大的放在最后一个 
int max(int a[], int len);
int main()
{
	
    //int a[]={10,20,5,16,45,1,4,3,21};
    int a[10];
    for (int i=0; i<10; i++){
	     scanf("%d", &a[i]);
	}
    int len=sizeof(a)/sizeof(a[0]);
     
    for (int i=len-1; i>0 ; i--){
    	int maxid = max(a, i+1);
        //swap a[maxid], a[i]
		int t=a[maxid];
        a[maxid]=a[i];
        a[i]=t;
    }
    
    for (int i=0; i<len; i++){
    	printf("%d ", a[i]);
    	
	} 
	return 0;	
 } 

int max(int a[], int len){
	int maxid=0;
	for (int i=1; i<len; i++){
		if (a[i]>a[maxid]){
			maxid=i;
		}
	}
	return maxid;
}
