#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        string s;
        cin>>n>>a>>b;
        ll am =0,an=0;
        while(n--)
        {
            cin>>s;
            if(s[0] == 'E' || s[0]=='Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
            {
                am +=a;
            }
            else{
                an +=b;
            }

        }
        //cout<<am<<" "<<an;
        if(am>an)
        {
            cout<<"SARTHAK"<<endl;
        }
        else if(am<an){
            cout<<"ANURADHA"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
        
    }
return 0;
}