/*#include<stdio.h>
//return+parameter function
int number(int a,int b)
{
    int sum=a+b;
    int sub=a+b;
    return sum,sub;
}
int main()
{
    int n=number(100,200);
    int s=number(200,300);
    printf("%d\n",n);
    printf("%d",s);
    return 0;
}*/

/*#include<stdio.h>
int sum()
//no return++parameter
{
    printf("mahfuj alam mahim\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{
    printf("mahabub alam bishal\n");
    int s=sum();
    //printf("shahadat alam shawon\n");
    printf("%d\n",s);
    printf("shahadat alam shawon");
    return 0;
}*/

/*#include<stdio.h>
//no return+parameter
void number(int a,int b)
{
    int sum=a+b;
    printf("%d",sum);
}
int main()
{
    number(50,100);
    return 0;
}*/

#include<stdio.h>
//no return+no parameter
void number()
{
    int a,b;
    a=50;
    b=30;
    int sum=a+b;
    printf("%d",sum);
}
int main()
{
    number();
    return 0;
}