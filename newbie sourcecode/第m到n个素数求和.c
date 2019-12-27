#include <stdio.h>

int main()
{
 int x=2;
 int i,cnt=0;
 int m, n;
 int sum=0;
 int M;
 scanf("%d %d", &m, &n);
 while(cnt<m){
  int isprime=1;
  for(i=2;i<x;i++){
     if(x%i==0){
       isprime=0;
     }
   }
  if(isprime==1){
    sum += x;
    cnt ++;
  }
    x++;
 }

 M = x-1;
 cnt = 0;
 int SUM = 0;
  while(cnt<n-m){
   int isprime=1;
   for(i=2;i<x;i++){
     if(x%i==0){
     isprime=0;
   }
  }
  if(isprime==1){
   SUM += x;
   cnt ++;
  }
    x++;
 }
 




/*
printf("%d\n", sum);
printf("%d\n", x);
printf("%d\n", SUM);
*/
  
  printf("%d\n", SUM+M);
  return 0;
}
 
