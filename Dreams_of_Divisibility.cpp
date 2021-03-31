#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long int a[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
           if((a[i]%2) !=0)
           {
               a[i] += a[i];
           } 
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum +=a[i];
            }
        if(sum%k!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    }

