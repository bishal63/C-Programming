#include<stdio.h>
void mahabub(int n,int i)
{
    if(n==0) return;
    printf("%d\n",n);
    mahabub(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int n;
        scanf("%d",&n);
        mahabub(n,0);
    }
}