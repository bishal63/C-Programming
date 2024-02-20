//h.sorting
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}*/

//c.counting sort string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        freq[a-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(freq[i-'a']>0)
        {
            for(int j=0;j<freq[i-'a'];j++)
            {
                cout<<i;
            }
        }
    }
}