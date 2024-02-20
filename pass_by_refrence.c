#include<stdio.h>
void mahabub(int *p)
{
    *p=500;
    printf("pointer ar address-%d\n",&p);
    printf("pointer ar refrence address-%d\n",p);

}
int main()
{
    int x=300;
    mahabub(&x);
    printf("main function ar refrence value-%d\n",x);
    printf("main function ar value-%d\n",x);
    printf("main ar address-%d\n",&x);
}