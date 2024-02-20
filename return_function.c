#include<stdio.h>
int mahabub(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //printf("%d",mahabub(a,b));
    int su=mahabub(a,b);
    printf("%d",su);
}