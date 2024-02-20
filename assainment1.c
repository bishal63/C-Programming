// print it problem1
/*#include<stdio.h>
int main()
{
    printf("Hello,world! I am learning C programming language.^_^\nProgramming is fun and challenging./\\/\\/\\ \nI want to give my 100%% dedication to learn! \tI will succeed one day.");
    return 0;
}*/

//multiply problem2
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your two input:");
    scanf("%d %d",&a,&b);
    int mul=a*b;
    printf("%d",mul); 
    return 0;
}*/

//divisible problem3
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter your input:");
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}*/

//divisible2 problem 4 (not solved)
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter your input:");
    scanf("%d",&n);
    if(n%3==0 && n%7==0)
    {
        printf("%d");
    } 

    return 0;
}*/

//shoping problem 5
#include<stdio.h>
int main()
{
    int tk;
    printf("enter your taka:");
    scanf("%d",&tk);
    if(tk>=500 && tk<1000)
    {
        printf("I will buy new shoes\n");
        printf("Alisha will buy new shoes\n");
    }
    else if(tk>1000 && tk<1500)
    {
        printf("I will by new punjabi");
    }
    else if(tk>=1500 || 1500<tk)
    {
        printf("I will buy new punjabi\nI will buy new shoes\nAlisha will buy new shoes");
    }
    else
    {
        printf("bad luck!");
    }
    return 0;
}