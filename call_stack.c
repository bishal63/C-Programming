#include<stdio.h>
void mahabub()
{
    printf("mahabub alam\n");
}
void bishal()
{
    printf("bishal\n");
    mahabub();
    printf("mahafuj alam\n");
}
int main()
{
    printf("Hello world\n");
    bishal();
}