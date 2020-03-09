//循环输入字符，当输入字符为字符'$'时结束，统计其中英文字母、空格、数字和其他字符的个数并输出。 
//输入格式：字符回车字符回车字符回车....$ 回车不计入 
#include <stdio.h>

int main() {
	int eng=0, num=0, space=0, others=0;
	int ch=0;

	do {
		scanf("%c", &ch); //在这里不支持输入回车 
		getchar();   //把回车从输入缓冲区中清除。 
		if (ch>64 && ch<91 || ch>96 && ch<123) {
		++eng;
		}else if (ch==32) {
			++space;
		}else if (ch>47 && ch<58) {
			++num;
		}else {
			++others;
		}
	}while (ch!='$');
	
	printf("其中英文字母有%d个，空格有%d个，数字有%d个，其他字符有%d个。\n", eng, space, num, others);
	
	return 0;
}
