#include<stdio.h>
void mahabub(int n)
{
    if(n==6) return;
    //mahabub(n+1);
    //printf("%d\n",n);
    printf("%d\n",n);
    mahabub(n+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    mahabub(1);
}