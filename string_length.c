#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("input:");
    gets(name);
    printf("%s",name);
    printf("\n");
    int len=strlen(name);
    printf("%d",len);
    return 0;
}