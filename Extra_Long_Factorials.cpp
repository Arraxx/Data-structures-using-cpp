#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int print(ll n)
{
    if(n==0)
    {
        return 1;
    }
    return n*print(n-1);
}
int main(){
    ll n;
    cin>>n;
    cout<<print(n);
}