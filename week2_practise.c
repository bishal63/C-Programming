//practise problem 1
/*#include<stdio.h>
int main()
{
    char word;
    printf("input word:");
    scanf("%c",&word);
    
    if(word>='a' && word<='z')
    {
        printf("%c",word=word+1);
    }
    return 0;
}*/

//practise problem 2
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("three input:");
    scanf("%d %d %d",&a,&b,&c);
    int d=20;
    if(a*b+c==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}*/

//practise problem 3 (not solved)
/*#include <stdio.h>
int main() {
    int x, i;

    // Get an integer input from the user
    printf("\nInput an integer: ");
    scanf("%d", &x);

    // Print all the divisors of x
    printf("All the divisors of %d are: ", x);
    for(i = 1; i <= x; i++) {
        if((x%i) == 0){
            printf("\n%d", i);
            printf("\n");
        }
    }

    return 0;
}*/


//practise problem 4
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("input:");
    scanf("%d %d",&a,&b);
    int c=a-b;
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("0");
    }
    return 0;
}*/

//practise problem 5
#include<stdio.h>
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    int x=n%10;
    int y=n/10;
    if(x%y==0)
    {
        printf("yes");
    }
    else if(y%x==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}