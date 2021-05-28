#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int m=1;
    cin>>t;
    while(t--)
    {
        
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=1;
        cout<<"Case #"<<m<<": "; 
        for(int i=0;i<n;i++)
        {
            if(s[i]<s[i+1])
            {
                cout<<c<<" ";
                c++;
            }
            else
            {
                cout<<c<<" ";
                c=1;
            }
        }
        cout<<endl;
        m++;
    }
    return 0;
}