#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,h,c=0,d=0;
        cin>>m>>h;
        c = h*h;
        d = m/c;
        if(d<=18)
        {
            cout<<"1"<<endl;
        }
        else if(d>=19 && d<=24)
        {
            cout<<"2"<<endl;
        }
        else if(d>=25 && d<=29)
        {
            cout<<"3"<<endl;
        }
        else if(d>=30){
            cout<<"4"<<endl;
        }
        
    }
}