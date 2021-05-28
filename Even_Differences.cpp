#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    
    while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll count=0,c=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            count++;
        }
        else{
            c++;
        }
    }
    cout<<min(count, c)<<endl;
    }
    return 0;
}