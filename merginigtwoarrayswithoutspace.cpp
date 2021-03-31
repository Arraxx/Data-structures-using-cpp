#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]<a[i])
            {
                swap(a[i],b[j]);
            }
        }
    }
    sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    for(int j=0;j<m;j++)
    {
        cout<<b[j]<<" ";
    }
return 0;
}