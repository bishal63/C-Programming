/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=1;
    for(int i=0;i<a;i++)
    {
        for(int i=0;i<n;i++)
        {
            printf("*");
        }
        n++;
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,num=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int i=1;i<=num;i++)
        {
            printf("%d ",i);
        }
        num++;
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,star,space;
    scanf("%d",&a);
    star=a;
    space=0;
    for(int i=0;i<a;i++)
    {
        for(int i=0;i<star;i++)
        {
            printf("*");
        }
        for(int i=0;i<space;i++)
        {
            printf(" ");
        }
        star=star-1;
        //space=space+1;
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,star;
    scanf("%d",&a);
    star=a;
    for(int i=0;i<a;i++)
    {
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,star,space;
    scanf("%d",&a);
    star=1;
    space=a-1;
    for(int i=0;i<a;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,star,space;
    scanf("%d",&a);
    star=a*2-1;
    space=0;
    for(int i=1;i<=a;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        if(i<=a-1)
        {
            space++;
            star=star-2;
        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int a,space,star;
    scanf("%d",&a);
    space=a-1;
    star=1;
    for(int i=1;i<=a*2-1;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        if(i<=a-1)
        {
            star+=2;
            space--;
        }
        else
        {
            space++;
            star-=2;
        }
        printf("\n");

    }
}*/

/*#include<stdio.h>
int main()
{
    int a,m;
    m=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int i=1;i<=m;i++)
        {
            printf("%d ",i);
        }
        m++;
        printf("\n");
    }
}*/

#include<stdio.h>
int main()
{
    int a,number;
    scanf("%d",&a);
    number=a;
    for(int i=1;i<=a;i++)
    {
        for(int i=1;i<=number;i++)
        {
            printf("%d ",i);
        }
        if(i<=a-1)
        {
            number--;
        }
        printf("\n");
    }
}