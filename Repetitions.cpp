#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=1,d=1;
    for(int i=0;i<s.size();i++)
    {
        
        if(s[i]!=s[i+1])
        {
            c=0;
        }
        c++;
        if(c>d)
        {
            d=c;
        }
    }
    cout<<d;

}