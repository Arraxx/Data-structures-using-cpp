#include<bits/stdc++.h>
#define ll long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll count=0;
    for(ll i=0;i<n-1;i++)
    {
        ll c=0;
        c = a[i+1] - a[i];
        if(c<0)
        {
            
            a[i+1] = a[i+1] + abs(c);
            count+=abs(c);
        }
    }
cout<<count<<endl;
}