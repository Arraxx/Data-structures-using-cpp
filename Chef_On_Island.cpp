#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        float x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        float a = x/xr;
        float b = y/yr;
        float c = min(a,b);
        if(c>=d)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}