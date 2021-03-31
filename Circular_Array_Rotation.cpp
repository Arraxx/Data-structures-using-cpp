#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k,temp=0,a[100000],b[100000],j,q;
cin>>n>>k>>q;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<q;i++)
{
    cin>>b[i];
}
for(i=0;i<k;i++){
    temp = a[n-1];
  for(j=n;j>1;j--)
{
  a[j-1] = a[j-2]; 
}

a[0] = temp;
}
for(i=0;i<q;i++)
{
    cout<<a[b[i]]<<endl;
}
return 0;
}
