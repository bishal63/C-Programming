#include<stdio.h>
long long int mahabub(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int sum=mahabub(n-1);
    return sum*n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int sum=mahabub(n);
    printf("%lld",sum);
}