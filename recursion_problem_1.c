#include<stdio.h>
void word()
{
    printf("I Love Recursion\n");
    word();
}
int main()
{
    word();
}