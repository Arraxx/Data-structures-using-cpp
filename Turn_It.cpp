#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        float u,v,a,s;
        cin>>u>>v>>a>>s;
        if(u ==1 && v==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
        float c=0;
        c= sqrt((u*u)+2*(-1)*(a)*s);
       // c = abs(c);
        //cout<<c<<endl;
        if(c<=v)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }
        
    }
}