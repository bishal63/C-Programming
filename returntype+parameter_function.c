#include<stdio.h>
int mahabub(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int name=mahabub(100,200);
    int name2=mahabub(300,200);
    printf("%d\n%d",name,name2);
}