#include<stdio.h>
int main()
{
    for(int a=1;a<=100;a++)
    {
        if(a%2==0)
        {
            printf("%d-even\n",a);
        }
        else
        {
            printf("%d-odd\n",a);
        }
    }
    return 0;
}