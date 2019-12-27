#include <stdio.h>
#include <string.h>

int main()
{
	char s[]="Hello World!";
	char a[]="Hello World"; 
	char b[]="exam";
	char c[]="mathexam";
	char d[10]="damn ";
	char e[]="it"; 
	char f[8];
	
	scanf("%7s", &f);                  //scanf读到空格或回车为止。 这里7限制最多读入。 
	printf("%s\n\n", f);
	
	printf("%lu\n", strlen(s));           //strlen()函数返回字符串长度（不包括结尾的0） 
	printf("%lu\n\n", sizeof(s)/sizeof(s[0])); 
	
	printf("%d\n\n", strcmp(s, a));       //strcmp()函数返回s[i]-a[i]（若s[i]!=a[i]）否则返回0 
	
	printf("%s\n\n", strcpy(b, c));       //strcpy(char *dst, char *src)函数一个字符一个字符地拷贝数组src至dst。返回dst（！dst必须具有足够的空间！）
	
	printf("%s\n\n", strcat(d, e));	      //strcat(char *s1, char *s2)将s2拷贝到s1后面（连接），返回s1（！s1必须具有足够的空间！） 
	
/*对于strcpy、strcat可以在参数表内加一个n表示能够拷贝过去的最大字符个数，
对于strcmp，可以在参数表后加一个n表示比较前n位。*/
    
	printf("%d\n", strchr(s, 'H'));	            //strchr(char *str, int n)从左往右查找第一个 
	printf("%d\n\n", strrchr(s, '!'));          //从右往左查找第一个，返回指针。 
	
	
	return 0;
}
