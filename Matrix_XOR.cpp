#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        long int k;
        cin>>n>>m>>k;
        long int c=0,h=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                c = i+j+k;
                h = h^c;
                
            }
        }
        cout<<h<<"\n";
    }
}