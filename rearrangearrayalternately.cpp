#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int a[n],b[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int j = 0;
    for(int i=n-1;i>=n/2;i--)
    {
    
        b[j] = a[i];
        j = j + 2;
    }
    
    int c = 1;
    
    for(int i=0;i<n/2;i++)
    {
        b[c]=a[i];
        c = c + 2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

return 0;
}