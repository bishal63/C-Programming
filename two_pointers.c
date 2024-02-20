#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    //printf("%s",n);
    int i=0;
    int j=strlen(n)-1;
    int flag=1;
    while(i<j)
    {
        if(n[i]!=n[j])
        {
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==1)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}