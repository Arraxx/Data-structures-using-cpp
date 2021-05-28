#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int recurse(int n)
{
    if(n==1)
    {
        return n;
    }
    return 2*recurse(n-1)%m;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n=0;
    cin>>n;
    int re =0;
    re = recurse(n);
    cout<<re<<endl;
}
}