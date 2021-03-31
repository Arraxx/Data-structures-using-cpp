#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[n-1]+x >= h)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}