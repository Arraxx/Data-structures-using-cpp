#include<bits/stdc++.h>
#define ll long int
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main(){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    int sum=0;
    //cout<<n;
    for(int i=1;i<=2*n;i++)
    {
        sum+=gcd(n+i*i, n+(i+1)*(i+1));
    }
    cout<<sum<<endl;
}
return 0;
}