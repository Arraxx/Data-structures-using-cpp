#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    cin>>s;
    ll t=0;
    t = s.size();
    int f=0,u=0,c=0,k=0;
    for(ll i=0;i<t;i++)
    {
        if(s[i]=='A')
        {
            f++;
        }
        else if(s[i]=='C')
        {
            u++;
        }
        else if(s[i]=='G')
        {
            c++;
        }
        else
        {
            k++;
        }

    }
    if(f>=u && f>=c && f>=k)
    {
        cout<<f;
    }
    else if(u>=f && u>=c && u>=k)
    {
        cout<<u;
    }
    else if(c>=f && c>=u && c>=k)
    {
        cout<<c;
    }
    else if(k>=f && k>=u && k>=c)
    {
        cout<<k;
    }
return 0;

}