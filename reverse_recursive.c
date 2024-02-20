#include<stdio.h>
void mahabub(int i)
{
    if(i==6) return;
    mahabub(i+1);
    printf("%d\n",i);
}
int main()
{
    mahabub(1);
}