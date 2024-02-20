#include<stdio.h>
void mahabub(int n)
{
    if(n==0) return;
    printf("%d\n",n);
    mahabub(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    mahabub(n);
}