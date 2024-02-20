#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    //printf("%s %s",a,b);
    int c=strcmp(a,b);
    //printf("%d",c);
    if(c==1)
    {
        printf("b choto");
    }
    else if(c==-1)
    {
        printf("a choto");
    }
    else
    {
        printf("a,b same");
    }
    return 0;
}