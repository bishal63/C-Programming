#include<stdio.h>
void mahabub(int a)
{
    if(a==6) return;
    printf("%d",a);
    mahabub(a+1);

}
int main()
{
    mahabub(1);
}