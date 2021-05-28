#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        float k1,k2,k3,v,am,ab;
        cin>>k1>>k2>>k3>>v;
        am = k1*k2*k3*v;
        ab = 100/am;
        float value = (int)(ab * 100 + .5);
    float c = (float)value / 100;
    float a = 9.58;
    if(c<a)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}

// 9.567