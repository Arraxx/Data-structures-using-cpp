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
        c = a[n-1];
        for(int j=n-1;j>0;j--)
        {
            a[j] = a[j-1];
        }
        a[0] = c;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}