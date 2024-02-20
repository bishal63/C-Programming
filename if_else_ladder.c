#include<stdio.h>
int main()
{
    int tk;
    printf("enter your taka:");
    scanf("%d",&tk);
    if(tk>=1000)
    {
        printf("going to resturent");
    }
    else if(tk>=500)
    {
        printf("going to hotel");
    }
    else if(tk>=200)
    {
        printf("going to tea stall");
    }
    
    else
    {
        printf("going to home");
    }
    return 0;
}