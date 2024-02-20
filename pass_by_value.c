#include<stdio.h>
void mahabub(int a)
{
    printf("%d\n",a);
    a=50;
    printf("%d\n",a);
    //int sum=a+b;
    //printf("%p\n",&a);
    //printf("%d\n",sum);
}
int main()
{
    int a=20;
    mahabub(a);
    //printf("%p\n",&a);
    printf("%d\n",a);
}