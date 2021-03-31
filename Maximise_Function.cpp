#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,c,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c = abs(a[0]-a[n/2])+abs(a[n/2]-a[n-1])+abs(a[n-1]-a[0]);
        cout<<c<<endl;
        
        }
}