#include<stdio.h>
#include<string.h>
int main()
{
    char ma[20];
    scanf("%s",ma);
    int count[26]={0};
    for(int i=0;i<strlen(ma);i++)
    {
        /*if(ma[i]=='a')
        {
            count['a']++;
        }*/
        int value=ma[i]-97;
        count[value]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c-%d\n",i+97,count[i]);
        }

    }
    /*printf("%d\n",count[0]);
    printf("%d\n",count[1]);
    printf("%d\n",count[7]);
    printf("%d",count[20]);*/
}