#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<char>a(3);
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        if(a[0]=='P' && a[1]=='C' && a[2]=='M')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='C' && a[1]=='P' && a[2]=='M')
         {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='C' && a[1]=='M' && a[2]=='P')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='M' && a[1]=='C' && a[2]=='P')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='P' && a[1]=='M' && a[2]=='C')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='M' && a[1]=='P' && a[2]=='C')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}