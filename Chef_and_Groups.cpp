#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int b =0,count=0;
        b = s.size();
        for(int i=0;i<b;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                count++;
            }
        }
        if(s[b-1]=='1')
        {
            count = count+1;   }
        cout<<count<<endl;
    }
}