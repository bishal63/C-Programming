//practise problem 1
/*#include<stdio.h>
int main()
{
    printf("Recently I heard that you've achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you'll shine in your life!\tGood luck with all the barriers(^) in your life.");
    return 0;
}*/

//practise problem 2
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your input:");
    scanf("%d %d",&a,&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    float f=a/b;
    printf(" %d\n %d\n %d\n %f\n",c,d,e,f);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("enter your input:");
    scanf("%d %f",&a,&b);
    float c=a/b;
    printf("%f",c);
    return 0;
}*/

//practise problem 3
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter your input:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}*/

//practise problem 4
/*#include<stdio.h>
int main()
{
    int digit;
    printf("enter your digit:");
    scanf("%d",&digit);
    if(digit>0)
    {
        printf("positive");
    }
    else if(digit==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
    return 0;
}*/

//practise problem 5
/*#include<stdio.h>
int main()
{
    int tk;
    printf("enter your taka:");
    scanf("%d",&tk);
    if(tk>=10000)
    {
        printf("buy Gucci Bag\n");
        if(tk>20000)
        {
            printf("bought Gucchi Belt");
        }
    }
    else if(tk>=5000)
    {
        printf("bought Levis Bag\n");
    }
    else
    {
        printf("bought Something\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter your input:");
    scanf("%d",&n);
    for(n=1;n>=10;n++)
    {
        printf(n);
    }
    return 0;
}