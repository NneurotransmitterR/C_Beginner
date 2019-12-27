/*字符串指的是以整数0（'\0'）结尾的一串字符（数组）
0或'\0'是一样的
0不是字符串的一部分
计算字符串长度时不包含这个0
字符串以数组的形式存在，以数组或指针的形式访问（更多地用指针访问）
string.h里有很多处理字符串的函数
*/

#include <stdio.h>
#include <string.h>

int main()
{   //字符串变量的定义方式： 
    char *str = "Hello";      //指针定义字符串常量，字符串只读。  处理参数、动态分配空间。 
	char word[] = "Hello";    //数组定义，字符串将可被修改。 作为本地变量空间自动回收。 
	char line[10] = "Hello"; 
    //"Hello"称作字符串字面量或字符串常量，编译器会将它放入一个字符数组 
    
    printf("%s##\n", str);
    printf("%s\n", &str[2]);




    return 0;
} 
