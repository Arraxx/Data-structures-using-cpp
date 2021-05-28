#include "header.h"
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(i==1 && a[i]!=a[i+1] && a[i+1] == a[i+2])
            {
                cout<<i<<endl;
                break;
            }
            if(i==n && a[i]!= a[i-1] && a[i-1]==a[i-2])
            {
                cout<<i<<endl;
                break;
            }
            if(i!=1 && i!=n && a[i]!=a[i+1] && a[i]!=a[i-1])
            {
                cout<<i<<endl;
                break;
            }
        }
        
    }
}