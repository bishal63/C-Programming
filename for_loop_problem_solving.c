//sum  problem
/*#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("input:");
    printf("\n");
    for(int a=1;a<=10;a++)
    {
        //sum=sum+a;
        printf("%d",a);
    }
    //printf("\n%d\n",sum);   
    return 0;
}*/

/*#include<stdio.h>
int main()

{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        //printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    //printf("all the output:")
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
        printf("\n%d\n",i);
        
    }

    return 0;
}