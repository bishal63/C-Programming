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
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int another_i=array[i];
        array[i]=array[j];
        array[j]=another_i;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    
    return 0;
}