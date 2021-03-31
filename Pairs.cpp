#include<bits/stdc++.h>
using namespace std;
int main(){
    int f,n,i,j,count=0;
    long int a[10000];
    cin>>n>>f;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
for(i=n;i>0;i--)
{
    for(j=i-1;j>=0;j--)
{
    if((a[i]-a[j])==f)
    {
        count++;
    }
}
}
cout<<count;
}