#include<stdio.h>
int main()
{
    int number[5]={10,20,30,40,50};
    printf("%d\n",number[0]);
    printf("%d\n",*number);
    printf("%d\n",&number[0]);
    printf("%d\n",number);
    printf("%d\n",*(number+1));
    printf("%d\n",&number[1]);                            
    printf("%d\n",&number);
}