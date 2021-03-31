
#include<iostream>
#include<algorithm>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,b;
cin>>n>>b;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
int sum=0,count=0;
for(int i=0;i<n;i++)
{
    sum += a[i];
    if(sum<=b)
    {
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}