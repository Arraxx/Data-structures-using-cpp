#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>m>>n;
        vector<int> a(n);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<n;i++)
        {
            for(ll j=i+1;j<=n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    cout<<i<<" "<<j;
                    break;
                }
                
            }
        }
        cout<<endl;
    }
    return 0;
}