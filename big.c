#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 10
int n,a[100][100];
char w0[]="student";
char w1[]="childhood";
char w2[]="successful";
char w3[]="scientific";
char w4[]="chocolate";
char w5[]="university";
char w6[]="christmas";
char w7[]="chromates";
char w8[]="photoshop";

void before()
{
	printf("程序说明：\n");
	printf("候选单词：student childhood successful\n");
	printf("          scientific chocolate university\n");
	printf("          christmas chromates photoshop\n");
	printf("\n");
	printf("Developed By Zheng Zihan, Dec. 2020\n");
	printf("All rights reserved.");
	printf("\n");
	printf("开始游戏...");
	printf("\n");
}

void printhang()
{
	int i,j;	
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
//打印表格
void form()
{
	int i,j;
	a[1][3]='|';
	for (j=0;j<=5;j++){
		a[0][j]='_';}
	for (i=1;i<=8;i++){
		a[i][0]='|';}
	for (j=1;j<=5;j++){
		a[6][j]='_';}
	a[7][6]='|';
	for (j=7;j<=10;j++){
		a[7][j]='_';}
	for (j=1;j<11;j++){
		a[8][j]='_';}
	a[8][11]='|';
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			if ((a[i][j]!='_')&&(a[i][j]!='|')){
				a[i][j]=' ';
			}
		}
	}
	printhang();
}

void printcai(char *q, int n)
{
	int i;
	printf("待填单词：");
	for (i=0;i<n;i++)
		printf("%c ",q[i]);
	printf("\n");
}
//打印“待填单词”
int judge(int k,char c,char *o,char *gu,char *sh)
{
	int i,q,j,m;
	q=0;
	if ((c>='a')&&(c<='z'))
		c=c;
	else {
		if ((c>='A')&&(c<='Z')){
			c=c+32;
		}
		else {
			printf("第%d次字母猜测：",k);
			return -1;
		}
	}
	for (i=0;i<n;i++){
		if (c==gu[i]){ 
			printf("字母%c已经猜过（猜中），请重新猜测。\n",c);
			printf("第%d次字母猜测：",k);
			return -1;
		}
		else {
			for (j=0;j<k;j++){
				if (c==sh[j]){
					printf("字母%c已经猜过（未中），请重新猜测。\n",c);
					printf("第%d次字母猜测：",k);
					return -1;
				}
			}
		}
	}
	for (i=0;i<n;i++){
		if (c==o[i]){
			gu[i]=c;
			q++;
		}
	}
	for (i=0;i<n;i++){
		if (o[i]==gu[i])
			m++;
	}
	if (m==n){
		printf("You Win! The man is ALIVE.\n");
		printf("\n");
		printf("真实单词：");
		for (i=0;i<n;i++)
			printf("%c ",o[i]);
		printf("\n");
		printf("你的猜测序列：");
		for (i=0;i<k;i++)
			printf("%c",sh[i]);
		return 2;
	}
	if (q>0)
		return 0;
	else 
		return 1;
}
//判断输入正确与否
void execute(int m,int k,char c,char *s1,char *s2)
{
	int i;
	switch(m){
	case 0:
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 1:
		a[2][3]='0';
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 2:
		a[3][2]='/';
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);	
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 3:
		a[3][3]='|';
		a[4][3]='|';
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 4:
		a[3][4]='\\';
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 5:
		a[5][2]='/';
		printhang();
		printf("待填单词：");
		for (i=0;i<n;i++)
			printf("%c",s1[i]);
		printf("\n");
		printf("第%d次字母猜测：",k);
		break;
	case 6:
		a[5][4]='\\';
		printhang();
		printf("You Lost! The man is HANGED.");
		printf("\n");
		printf("真实单词：");
		for (i=0;i<n;i++)
			printf("%c ",s1[i]);
		printf("\n");
		printf("你的猜测序列：");
		for (i=0;i<k;i++)
			printf("%c",s2[i]);
		break;
	}
}
// 根据猜测情况给出回应
void main()
{
	int m,k,tf,space,re;//m是错误次数，n是单词长度,k是猜测总次数，tf是判断游戏循环结束标志，space为剩余空格计数器,re是return返回值
	char i,h;                //i为赋值计数器兼单词挖空位置
	char *p,guess[MAX],shuru[100];
	char c;            //c为待输入字符，
	before();
label2:
	form();
	srand(time(NULL));
	i=rand()%9;
	switch(i){
	case 0:p=w0;break;
	case 1:p=w1;break;
	case 2:p=w2;break;
	case 3:p=w3;break;
	case 4:p=w4;break;
	case 5:p=w5;break;
	case 6:p=w6;break;
	case 7:p=w7;break;
	case 8:p=w8;break;
	}
	n=strlen(p);
	for (i=0;i<n;i++)
		guess[i]='_';
	tf=0;
	space=0;
	k=0;
	m=0;
	//检索输入，判断是否存在（判断）
	//正确：绞刑架不变，否则加一笔，无论如何均输出一次绞刑架，待填单词，第k次猜测
label1:
	do {
		printcai(guess,n);
		if (k==0)
			printf("第1次字母猜测：");
		scanf("%c",&c);
		fflush(stdin);
		k++;
		shuru[k-1]=c;
		printf("\n");
		re=judge(k,c,p,guess,shuru);
		if (re<0){
			goto label1;
		}
		else {
			if (re<=2)
				goto label3;
			else{
				m+=re;
				execute(m,k,c,guess,shuru);
			}
		}
		if (m==6)
			tf++;
		for (i=0;i<n;i++){
			if (guess[i]=='_'){
				space++;
			}
		}
		if (space==0)
			tf++;
		else space=0;
	}while (tf==0);
label3:	
	printf("想再玩一次吗？(y/n)");
	scanf("%c",&h);
	if (h=='y')
		goto label2;
	system("pause");
}
