#include<bits/stdc++.h>
#define ll long long int
#define q 1000000007
using namespace  std;
int main()
{
    ll t;
    cin>>t;
    int m=1;
    while(t--)
    {
        ll g;
        cin>>g;
        ll c=0,count=1;
        cout<<"Case #"<<m<<": ";
        for(ll i=1;i<g;i++)
        {
            for(ll j=i;j<=g;j++)
            {
            if(c<g)
            {
                c= (c+j)*q;
            }
            if(c==g)
            {
                
                count++;
            }
            if(c>=g)
            {
                c=0;
                break;
            }
            continue;
        }
        }
        cout<<count<<endl;
        m++;
    }
    return 0;
}