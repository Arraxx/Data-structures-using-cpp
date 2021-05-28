#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int first =0;
        first = a[1];
        for(int i=1;i<=n;i++){
            first |= a[i];
            
        }
        cout<<first<<endl;
        int d,w,second=0;
        while(q--){
            cin>>d>>w;
            a[d] = w;
            
            second = a[1];
            for(int i=1;i<=n;i++)
            {
                second |= a[i];
                
            }
            cout<<second<<endl;
        }
        
    }
}