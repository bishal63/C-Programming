#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1;
    int star=1;
    for(int i=0;i<(n*2);i++)
    {
        for(int j=0;j<space;j++)
        {
            printf(" ");
        }
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        //space--;
        //star=star+1;
        if(i<n)
        {
            space--;
            star=star+2;
        }
        else
        {
            space++;
            star=star-2;
        }
        printf("\n");
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }
    return 0;
}*/