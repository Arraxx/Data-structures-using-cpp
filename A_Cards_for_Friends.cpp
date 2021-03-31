#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        if(a%2==0)
        {
            int g = (a/2)*b;
            if(g*2>=c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            

        }
        else if(b%2==0)
        {
            int h = a*(b/2);
            if(h*2>=c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    }
}