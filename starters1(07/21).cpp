#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if((a+b)<3)
        {
            cout<<"1"<<'\n';
        }
        else if((a+b)>=3 && (a+b)<=10)
        {
            cout<<"2"<<'\n';
        }
        else if((a+b)>=11 && (a+b)<=60)
        {
            cout<<"3"<<'\n';
        }
        else if((a+b)>60)
        {
            cout<<"4"<<'\n';
        }
    }
 
 
return 0;
}
 