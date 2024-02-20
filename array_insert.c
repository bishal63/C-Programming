#include<stdio.h>
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    int array[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int position,value;
    scanf("%d %d",&position,&value);
    for(int i=n;i>position+1;i--)
    {
        array[i]=array[i-1];
    }
    array[position]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}