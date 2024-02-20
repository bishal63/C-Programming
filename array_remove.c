#include<stdio.h>
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int position;
    scanf("%d",&position);
    for(int i=position;i<n-1;i++)
    {
        array[i]=array[i+1];
    }
    for(int i=1;i<n;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}