#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,c,i,d=0,g;
    long int a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>c;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {

            d = d+a[i];
        }
        if(d<k)
        {
            cout<<"0"<<endl;
        }
        else if(d>=k)
        {
            g = d/k;
        if(c>g)
        {
            cout<<g<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        }
        d=0;
    }
    return 0;
}
