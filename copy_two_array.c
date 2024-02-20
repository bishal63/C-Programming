#include<stdio.h>
int main()
{
    int m;
    printf("input:");
    scanf("%d",&m);
    int array1[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&array1[i]);
    }
    int n;
    scanf("%d",&n);
    int array2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }
    int copy[m+n];
    for(int i=0;i<m;i++)
    {
        copy[i]=array1[i];
    }
    int i=m;
    for(int j=0;j<n;j++)
    {
        copy[i]=array2[j];
        i++;
    }
    for(int i=0;i<m+n;i++)
    {
        printf("%d",copy[i]);
    }
    return 0;
}