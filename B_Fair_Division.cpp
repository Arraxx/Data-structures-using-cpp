#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        int fu=0,ck=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                fu++;
            }
            if(a[i]==2)
            {
                ck++;
            } 
        }
cout<<fu<<ck;
        
    return 0;
    }
}