#include <stdio.h>

int main(int argc, char **argv) {
    
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d %d %d %d\n", *(*(a+2)+2), *(a[2]+2), a[2][2], *(a+2)+2);
    
	char *s[]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    printf("%c %c", *s[1], *s[3]);
    
    return 0;
}
 
