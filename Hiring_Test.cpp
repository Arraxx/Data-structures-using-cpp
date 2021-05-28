#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,m;
        cin>>n>>m;
        cin>>x>>y;
        while(n--)
        {
            string s;
            int c=0,d=0;
            cin>>s;
            for(int i=0;i<m;i++)
            {
                if(s[i] == 'F')
                {
                    c++;
                }
                if(s[i] == 'P')
                {
                    d++;
                }
            }
            if(c>=x)
            {
                cout<<"1";
            }
            else if(c>=x-1 && d>=y)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
}