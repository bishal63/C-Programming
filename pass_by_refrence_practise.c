/*#include<stdio.h>
void mahabub(int *p)
{
    *p=200;
    printf("%d\n",*p);
}
int main()
{
    int a=20;
    printf("%d\n",a);
    mahabub(&a);
    printf("%d",a);
}*/

#include<stdio.h>
void mahabub(int *p)
{
   // *p=200;
    //int *q=p;
    //printf("%p\n",p);
    printf("%d\n",*p);
    //printf("%d\n",*q);
}
int main()
{
    int a=20;
    //printf("%p\n",&a);
    //printf("%d\n",a);
    mahabub(&a);
    //printf("%d",a);
}