#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        ll int g=0;
        if(b[0]=='A')
        {
            if(a[0]==1 && a[1]==2)
            {
                g = a[3]*10+a[4];
            }
            else{
                g = a[0]*1000+a[1]*100+a[3]*10+a[4];
            }
        }
        else{
            if(a[0]==1 && a[1]==2)
            {
                g = 1200 + a[3]*10+a[4];
            }
            else{
                g = 1200+a[0]*1000+a[1]*100+a[3]*10+a[4];
            }
        }
        int n;
        cin>>n;
        string c,d,e,f;
        for(int j=0;j<n;j++)
        {
            cin>>c>>d>>e>>f;
            ll int h=0,i=0;
        if(d[0]=='A')
        {
            if(c[0]==1 && c[1]==2)
            {
                h = c[3]*10+c[4];
            }
            else{
                h = c[0]*1000+c[1]*100+c[3]*10+c[4];
            }
        }
        if(d[0]=='P'){
            if(c[0]==1 && c[1]==2)
            {
                h = 1200 + c[3]*10+c[4];
            }
            else{
                h = 1200+c[0]*1000+c[1]*100+c[3]*10+c[4];
            }
        }
        if(f[0]=='A')
        {
            if(e[0]==1 && e[1]==2)
            {
                i = e[3]*10+e[4];
            }
            else{
                i = e[0]*1000+e[1]*100+e[3]*10+e[4];
            }
        }
         if(f[0]=='P'){
            if(e[0]==1 && e[1]==2)
            {
                i = 1200 + e[3]*10+e[4];
            }
            else{
                i = 1200+e[0]*1000+e[1]*100+e[3]*10+e[4];
            }
        }
        if(h<=g<=i)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        }
    }
    cout<<endl;
    return 0;
}