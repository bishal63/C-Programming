/*#include<stdio.h>
int main()
{
    int number[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("%d",number[i]);
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int number[5];
    printf("five input:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}