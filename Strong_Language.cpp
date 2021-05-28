#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n,count=0,ab=0;
        cin>>k>>n;
        string s;
        cin>>s;
        //cout<<s;
        for(ll i=0;i<k;i++)
        {
            if(s[i]=='*')
            {
                count++;
                if(count>=ab)
                {
                    ab = count; 
                }
            }
            else{
                count=0;
            }
 
        }
        if(ab>=n)
            {
                cout<<"YES"<<endl;
                
            }
        else
        {
            cout<<"NO"<<endl;
        }
       // cout<<count;
        
    }
}
