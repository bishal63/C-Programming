#include<stdio.h>
int main()
{
    int tk;
    printf("enter your taka:");
    scanf("%d",&tk);
    if(tk>=1000)
    {
        printf("going to resturent\n");
        if(tk>=2000)
        {
            printf("going to resort\n");
        }
        else if(tk>=1500)
        {
            printf("going to buffet\n");
        }
        
    }
    else if(tk>=500)
    {
        printf("going to hotel\n");
    }
    else if(tk>=200)
    {
        printf("going to tea stall\n");
    }
    else
    {
        printf("kothaw jabo na\n");
    }
    return 0;
}