#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0,max=0;
        for(ll i=0;i<n;i++)
        {

                sum = a[i]*a[i+1] + abs(a[i]-a[i+1]);       
                if(sum>max)
                {
                    max=sum;
                }
            

        }

cout<<max<<endl;
    }
}