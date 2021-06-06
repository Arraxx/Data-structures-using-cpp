#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define null NULL
 
using namespace std;

ll recurse(ll s)
{
    if(s==0)
    {
        return 1;
    }

    return s*recurse(s-1);
}
ll zero(ll s)
{
    stringstream ss;
     ss << s;
     string k;
     ss>>k;
     k = recurse(s);
    int i=0;
    while(k[i]=='0')
    {
        i++;
    }
    return i;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll s;
cin>>s;

cout<<zero(s);
 
return 0;
}