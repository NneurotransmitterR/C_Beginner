//还是数各种字符个数，以$结束
//输入格式：字符字符字符字符....$回车     $计入，回车不计入。 
#include <stdio.h>
#include <string.h>

int main() {
	int i=0;
	int eng=0, num=0, space=0, others=1;
	char str[10000];           //输入的字符串长度不能超过10000，这个一般自己定大点就行了。
	gets(str);             /*用scanf读字符串碰到空格会直接结束*/
	int len= strlen(str);
	
	for (i=0; i<len-1; ++i) {
		if (str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123) {
		++eng;
		}else if (str[i]==32) {
			++space;
		}else if (str[i]>47 && str[i]<58) {
			++num;
		}else {
			++others;
		}
	}
	
	printf("其中英文字母有%d个，空格有%d个，数字有%d个，其他字符有%d个。\n", eng, space, num, others);
	
	return 0;
} 
