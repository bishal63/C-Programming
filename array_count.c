/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int three=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]==3)
        {
            three++;
        }
        if(array[i]==1)
        {
            one++;
        }
    }
    printf("%d",three);
    printf("%d",one);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int cnt[4]={0};
    for(int i=0;i<n;i++)
    {
        if(array[i]==2)
        {
            cnt[0]++;
        }
        if(array[i]==6)
        {
            cnt[3]++;
        }
    }
    printf("%d",cnt[0]);
    printf("%d",cnt[3]);
    
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        int value=array[i];
        count[value]++;
    }
    //printf("%d",cnt[0]);
    for(int i=0;i<=9;i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}

