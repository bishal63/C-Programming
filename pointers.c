#include<stdio.h>
int main()
{
    int a=20;
    int *b=&a;
    *b=30;
    //printf("%p\n",&a);
    //printf("%p\n",b);
    printf("%d\n",a);
    printf("%d",*b);
    return 0;
}