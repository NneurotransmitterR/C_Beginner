//下面程序接受键盘上的输入,直到按回车键为止,这些字符被原样输出,但若有连续的一个以上的空格时只输出一个空格。
#include<stdio.h>

int main ( )

{ 

    char cx=0 , front='\0' ;

    while ( (cx=getchar())!='\n') {

           if (cx!=' ') putchar(cx) ;

           if (cx==' ')

              if (front!=cx)

                 putchar(cx);

           front=cx;

    }

    return 0;

}
