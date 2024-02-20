//problem1
/*#include<stdio.h>
void mahabub(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("I Love recursion\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    mahabub(n);
}*/ 

//problem2
/*#include<stdio.h>
void mahabub(int n)
{
    if(n==0) return;
    mahabub(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    mahabub(n);   
}*/

//problem3
/*#include<stdio.h>
void mahabub(int n)
{
    if(n==0) return;
    printf("%d ",n);
    mahabub(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    mahabub(n);
}*/

//problem4
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i<=0;i--)
    {
        if(i%2==1)
        {
            i++;
        }
        printf("%d ",a[i]);
    }
}