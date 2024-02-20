/*#include<stdio.h>
void mahabub(int number[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",number[i]);
    }
}
int main()
{
    int number[5]={10,20,30,40,50};
    mahabub(number,5);
}*/

#include<stdio.h>
void mahabub(int *number,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",number[i]);
    }
}
int main()
{
    int number[5]={10,20,30,40,50};
    mahabub(number,5);
}