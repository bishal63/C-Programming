#include<stdio.h>
void mahabub(int i)
{
    if(i==6) return;
    printf("%d\n",i);
    mahabub(i+1);
}
int main()
{
    mahabub(1);
}