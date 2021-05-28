#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,x;
        cin>>n>>m>>x;
        x-=1;
        ll ak = x/n;
        ll am = x%n;
        cout<<am*m + ak+1<<endl;

    }
    return 0;
}