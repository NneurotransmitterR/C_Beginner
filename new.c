#include <stdio.h>
int main()
{
    int n,i,j;
    for( i=n=4;i>=0;i-- )
    {
        for( j=n-i;j>0;j-- )
            printf(" ");
        for( j=0;j<2*i-1;j++ )
            printf("*");
        printf("\n");
    }
    return 0;
}
