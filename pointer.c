#include<stdio.h>
int main()
{
    int a=200;
    int *ptr=&a;
    a=300;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
}