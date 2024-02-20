/*#include<stdio.h>
int main()
{
    char name[8];
    printf("input:");
    scanf("%s",&name);
    printf("%s\n",name);
    return 0;
}*/

//space input string
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("input:");
    fgets(name,8,stdin);
    //gets(name);
    printf("%s",name);
    return 0;
}