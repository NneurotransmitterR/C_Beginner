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
	
	scanf("%7s", &f);                  //scanf�����ո��س�Ϊֹ�� ����7���������롣 
	printf("%s\n\n", f);
	
	printf("%lu\n", strlen(s));           //strlen()���������ַ������ȣ���������β��0�� 
	printf("%lu\n\n", sizeof(s)/sizeof(s[0])); 
	
	printf("%d\n\n", strcmp(s, a));       //strcmp()��������s[i]-a[i]����s[i]!=a[i]�����򷵻�0 
	
	printf("%s\n\n", strcpy(b, c));       //strcpy(char *dst, char *src)����һ���ַ�һ���ַ��ؿ�������src��dst������dst����dst��������㹻�Ŀռ䣡��
	
	printf("%s\n\n", strcat(d, e));	      //strcat(char *s1, char *s2)��s2������s1���棨���ӣ�������s1����s1��������㹻�Ŀռ䣡�� 
	
/*����strcpy��strcat�����ڲ������ڼ�һ��n��ʾ�ܹ�������ȥ������ַ�������
����strcmp�������ڲ�������һ��n��ʾ�Ƚ�ǰnλ��*/
    
	printf("%d\n", strchr(s, 'H'));	            //strchr(char *str, int n)�������Ҳ��ҵ�һ�� 
	printf("%d\n\n", strrchr(s, '!'));          //����������ҵ�һ��������ָ�롣 
	
	
	return 0;
}
