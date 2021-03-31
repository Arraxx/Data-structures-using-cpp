#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(d--)
    {
        int c=0;
        c = a[0];
        for(int j=0;j<n;j++)
        {
            a[j] = a[j+1];
        }
        a[n-1] = c;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}