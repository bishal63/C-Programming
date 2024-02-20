#include<stdio.h>
void mahabub(int a[],int n,int i)
{
    if(i==n) return;
    printf("%d\n",a[i]);
    mahabub(a,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //for(int i=0;i<n;i++)
    //{
      //  printf("array-%d ",a[i]);
    //}
    mahabub(a,n,0);
}