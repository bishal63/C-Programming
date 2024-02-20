#include<stdio.h>
void mahabub(int x)
{
    x=300;
    printf("create function value-%d\n",x);
    printf("create function address-%d\n",&x);
}
int main()
{
    int x=200;
    mahabub(x);
    printf("main function value-%d\n",x);
    printf("main function address-%d\n",&x);

}