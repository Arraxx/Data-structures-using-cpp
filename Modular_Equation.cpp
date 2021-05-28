#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll count=0;
        vector<ll> a(n+1,1);
        for(ll i=2;i<=n;i++)
        {
            ll b = m%i;
            count+=a[b];
            for(ll j=b;j<=n;j+=i)
            {
                a[j]++;
            }
            //cout<<endl;
        }
        cout<<count<<endl;
    //cout<<endl;
    }
    return 0;
}