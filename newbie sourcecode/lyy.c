#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Nmax 30
#define Smax 6
void Inputsubject(int S,char subject[][10])
{
    int i;
    printf("Please input the subjects separately.\n");
    for(i=0;i<S;i++)
    {
        printf("Subject %d:",i+1);
        gets(subject[i]);
    }
    printf("\n");
}
void Inputrecord(int N,int S,int score[][Smax],long num[],char name[][20] ,char subject[][10])
{
    int i,t,x;
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("Input the student's name and ID\n");
        printf("ID:");
        scanf("%ld",&num[i]);
        for(t=0;t<i;t++)
        {
            if(num[t]==num[i])
            {
                printf("Repeated ID!\n");
                printf("Input student's ID:");
                scanf("%ld",&num[i]);
            }
        }
        getchar();
        printf("Name:");
        gets(name[i]);
        printf("Input the student's scores separately\n");
            for(x=0;x<S;x++)
        {
            printf("%s:",subject[x]);
            scanf("%d",&score[i][x]);
            getchar();
        }
    }
    printf("\n");
}
void Getsumaver_student(int N,int S,int score[][Smax],char name[][20],int sum[])
{
    int i,x,t;
    printf("\nname");
    for(t=0;t<N;t++)
    {
        printf("\t%s",name[t]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        sum[i]=0;
        for(x=0;x<S;x++)
        {
            sum[i]=sum[i]+score[i][x];
        }
    }
    printf("Sum\t");
    for(i=0;i<N;i++)
    {
        printf("%d\t",sum[i]);
    }
    printf("\n");
    printf("Average\t");
    for(i=0;i<N;i++)
    {
        printf("%d\t",sum[i]/S);
    }
    printf("\n");
}
void Getsumaver_subject(int N,int S,int score[][Smax],char subject[][10],int sum[])
{
    int i,x,t;
    printf("\n");
    printf("subject\t");
    for(t=0;t<S;t++)
    {
        printf("%s\t",subject[t]);
    }
    printf("\n");
    for(x=0;x<S;x++)
    {
        sum[x]=0;
        for(i=0;i<N;i++)
        {
            sum[x]=sum[x]+score[i][x];
        }
    }
    printf("Sum\t");
    for(x=0;x<S;x++)
    {
        printf("%d\t",sum[x]);
    }
    printf("\n");
    printf("Average\t");
    for(x=0;x<S;x++)
    {
        printf("%d\t",sum[x]/N);
    }
    printf("\n\n");
}
void Descend_score(int N,int S,int sum[],char name[][20],long num[],int score[][Smax])
{
    int i,j,x,temp1,temp2;
    long temp4;
    char temp3[20];
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(sum[j]>sum[i])
            {
                temp1=sum[i];
                sum[i]=sum[j];
                sum[j]=temp1;
                temp4=num[i];
                num[i]=num[j];
                num[j]=temp4;
                strcpy(temp3,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp3);
                for(x=0;x<S;x++)
                {
                    temp2=score[i][x];
                    score[i][x]=score[j][x];
                    score[j][x]=temp2;
                }
            }
        }
    }
}
void Ascend_score(int N,int S,int sum[],char name[][20],long num[],int score[][Smax])
{
    int i,j,x,temp1,temp2;
    long temp4;
    char temp3[20];
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(sum[j]<sum[i])
            {
                temp1=sum[i];
                sum[i]=sum[j];
                sum[j]=temp1;
                temp4=num[j];
                num[j]=num[i];
                num[i]=temp4;
                strcpy(temp3,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp3);
                for(x=0;x<S;x++)
                {
                    temp2=score[i][x];
                    score[i][x]=score[j][x];
                    score[j][x]=temp2;
                }
            }
        }
    }
}
void Ascend_number(int N,int S,int score[][Smax],long num[],char name[][20])
{
    int i,j,x,temp4;
    long temp2;
    char temp3[20];
     for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(num[j]<num[i])
            {
                temp2=num[i];
                num[i]=num[j];
                num[j]=temp2;
                strcpy(temp3,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp3);
                for(x=0;x<S;x++)
                {
                    temp4=score[i][x];
                    score[i][x]=score[j][x];
                    score[j][x]=temp4;
                }
            }
        }
    }
    printf("\n");
}
void Ascend_name(int N,int S,int score[][Smax],long num[],char name[][20])
{
    int i,j,x,temp4;
    long temp2;
    char temp3[20];
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                temp2=num[i];
                num[i]=num[j];
                num[j]=temp2;
                strcpy(temp3,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp3);
                for(x=0;x<S;x++)
                {
                    temp4=score[i][x];
                    score[i][x]=score[j][x];
                    score[j][x]=temp4;
                }
            }
        }
    }
    printf("\n");
}
void Analasis(int N,int S,int score[][Smax],char subject[][10])
{
    int i,t;
    int sum1,sum2,sum3,sum4,sum5;
    printf("\n");
    for(t=0;t<S;t++)
    {
        sum1=sum2=sum3=sum4=sum5=0;
        printf("%s:\n",subject[t]);
        for(i=0;i<N;i++)
        {
            if(90<=score[i][t]&&score[i][t]<=100) sum1++;
            else if(80<=score[i][t]&&score[i][t]<90) sum2++;
            else if(70<=score[i][t]&&score[i][t]<80) sum3++;
            else if(60<=score[i][t]&&score[i][t]<70) sum4++;
            else sum5++;
        }
        printf("number of the excellent:  %d   percentage:%d%%\n",sum1,100*sum1/N);
        printf("number of the good:       %d   percentage:%d%%\n",sum2,100*sum2/N);
        printf("number of the middle:     %d   percentage:%d%%\n",sum3,100*sum3/N);
        printf("number of the pass:       %d   percentage:%d%%\n",sum4,100*sum4/N);
        printf("number of the failure:    %d   percentage:%d%%\n\n",sum5,100*sum5/N);
    }
}
void Search_number(int N,int S,long num[],int score[][Smax],char name[][20],char subject[][10])
{
    int i,t;
    int k=0;
    long number;
    printf("\n");
    printf("Input the student's ID:");
    scanf("%ld",&number);
    for(i=0;i<N;i++)
    {
        if(num[i]==number)
        {
            k=1;
            printf("\n");
            printf("Name:%s\n",name[i]);
            printf("ID:%ld\n",num[i]);
            for(t=0;t<S;t++)
            {
                printf("%s\t",subject[t]);
            }
            printf("\n");
            for(t=0;t<S;t++)
            {
                printf("%d\t",score[i][t]);
            }
            printf("\n\n");
        }
    }
    if(k==0)
    {
        printf("No finding!\n\n");
    }
}
void Search_name(int N,int S,long num[],int score[][Smax],char name[][20],char subject[][10])
{
    int i,t;
    int k=0;
    char name2[20];
    printf("\n");
    printf("Input the student's name:");
    getchar();
    gets(name2);
    for(i=0;i<N;i++)
    {
        if(strcmp(name[i],name2)==0)
        {
            k=1;
            printf("\n");
            printf("Name:%s\n",name[i]);
            printf("ID:%ld\n",num[i]);
            puts(subject[1]);
            for(t=0;t<S;t++)
            {
                printf("%s\t",subject[t]);
            }
            printf("\n");
            for(t=0;t<S;t++)
            {
                printf("%d\t",score[i][t]);
            }
            printf("\n\n");
            break;
        }
    }
    if(k==0)
    {
        printf("No finding!\n\n");
    }
}
void Printscore(int N,int S,int score[][Smax],long num[],char name[][20],char subject[][10])
{
    printf("\nName\tID\t");
    int i,x,t;
    for(x=0;x<S;x++)
    {
        printf("%s\t",subject[x]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%s\t%ld\t",name[i],num[i]);
        for(t=0;t<S;t++)
        {
            printf("%d\t",score[i][t]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int N,S;
    int sum_subject[Smax]={};
    int sum_student[Nmax]={};
    long num[Nmax]={};
    int score[Nmax][Smax]={};
    char name[Nmax][20]={};
    char subject[Smax][10];
    int function_number=0;
    printf("Number:190320230\n");
    printf("Subject No.7-program No.1\n\n");
    printf("Score Management System\n");
    Step1:printf("Please input the number of students:");
    scanf("%d",&N);
    if(N>30)
    {
        printf("The number exceeds 30!\n");
        goto Step1;
    }
    if(N<=0)
    {
        printf("Invalid number!\n");
        goto Step1;
    }
    Step2:printf("Please input the number of subjects:");
    scanf("%d",&S);
    getchar();
        if(S>6)
    {
        printf("The number exceeds 6!\n");
        goto Step2;
    }
    if(S<=0)
    {
        printf("Invalid number!\n");
        goto Step2;
    }
    Inputsubject(S,subject);
    printf("1. Input record\n");
    printf("2. Calculate total and average score of every course\n");
    printf("3. Calculate total and average score of every student\n");
    printf("4. Sort in descending order by total score of every student\n");
    printf("5. Sort in ascending order by total score of every student\n");
    printf("6. Sort in ascending order by number\n");
    printf("7. Sort in dictionary order by number\n");
    printf("8. Search by number\n");
    printf("9. Search by name\n");
    printf("10. Statistic analysis for every course\n");
    printf("11.List record\n");
    printf("0. Exit\n");
    MENU:do
    {
        printf("Please enter your choice:");
        scanf("%d",&function_number);
    }while(function_number<0||function_number>11);
    if(num[0]==0&&score[0][0]==0&&function_number!=1&&function_number!=0)
        {
            printf("Please input record first.\n");
            Inputrecord(N,S,score,num,name,subject);
            goto MENU;
        }
    switch(function_number)
    {
    case 1:
        Inputrecord(N,S,score,num,name,subject);
        goto MENU;
    case 2:
        Getsumaver_subject(N,S,score,subject,sum_subject);
        goto MENU;
    case 3:
        Getsumaver_student(N,S,score,name,sum_student);
        goto MENU;
    case 4:
        Descend_score(N,S,sum_student,name,num,score);
        Printscore(N,S,score,num,name,subject);
        goto MENU;
    case 5:
        Ascend_score(N,S,sum_student,name,num,score);
        Printscore(N,S,score,num,name,subject);
        goto MENU;
    case 6:
        Ascend_number(N,S,score,num,name);
        Printscore(N,S,score,num,name,subject);
        goto MENU;
    case 7:
        Ascend_name(N,S,score,num,name);
        Printscore(N,S,score,num,name,subject);
        goto MENU;
    case 8:
        Search_number(N,S,num,score,name,subject);
        goto MENU;
    case 9:
        Search_name(N,S,num,score,name,subject);
        goto MENU;
    case 10:
        Analasis(N,S,score,subject);
        goto MENU;
    case 11:
        Printscore(N,S,score,num,name,subject);
        Getsumaver_subject(N,S,score,subject,sum_subject);
        goto MENU;
    case 0:
        exit(0);
    }
}

