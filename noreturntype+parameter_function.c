#include<stdio.h>
void mahabub(int a,int b)
{
    int sum=a+b;
    printf("%d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    mahabub(a,b);
    //mahabub(10,20);
}