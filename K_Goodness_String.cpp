#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    IOS;
    int t,tt=0;
    cin>>t;
    while(t--){
        tt++;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                count++;
            }
        }
        int ak=0;
        ak = abs(k-count);
        cout<<"Case #"<<tt<<": "<<ak<<endl;
    }
}