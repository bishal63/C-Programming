#include<stdio.h>
void mahabub(int number[],int n)
{
    int num[5]={1,2,3,4,5};
    for(int j=0;j<5;j++)
    {
        printf("%d\n",num[j]);
    }
    number[2]=400;
}
int main()
{
    int number[5]={10,20,30,40,50};
    mahabub(number,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",number[i]);
    }
}