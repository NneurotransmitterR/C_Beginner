#include <stdio.h>
int main(){
    
int sum = 0;
int i=0; 
for ( i=0; i<10; i++ ) {
    if ( i%2==1 ) continue;
    sum += i;
}
printf("%d\n", sum);
return 0;   
}

