#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int f=0,g=0;
        while(a--)
        {
            string s;
            cin>>s;
            
            for(int i=0;i<b;i++)
            {
                if(s[i]=='1')
                f++;
            }
            
            for(int i=0;i<b;i++)
            {
                if(s[i]=='1' && s[i+1]=='1')
                {
                    g++;
                }
            }
        }
        cout<<f<<g;
        int c=g+g;
        int second = abs(f-c)/2;
        //cout<<second<<endl;
        

    }
}