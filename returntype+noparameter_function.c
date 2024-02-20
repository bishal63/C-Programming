#include<stdio.h>
int mahabub(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{
    int m=mahabub();
   // int m2=mahabub();
    printf("%d",m); 
}