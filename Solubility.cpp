#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,k;
        cin>>n>>x>>k;
        int am  = 0;
        am = (x+(100-n)*k)*10;
        cout<<am<<endl;
    }
}