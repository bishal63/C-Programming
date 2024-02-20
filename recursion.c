#include<stdio.h>
int mahabub(char a[],int i)
{
    if(a[i]=='\0')
    {
        return 0;
    }
    int ans=mahabub(a,i+1);
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
    if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char a[100];
    fgets(a,100,stdin);
    //printf("%s",a);
    int count=mahabub(a,0);
    printf("%d\n",count);
}