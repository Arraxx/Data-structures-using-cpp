#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=2,y=n-1,temp=1;
        while(y>0)
        {
            if(y%2==1)
            {
                temp = (x*temp)%m;
            }
                x=(x*x)%m;
                y=(y/2)%m;
        }
        cout<<temp<<endl;
    }
    return 0;
}