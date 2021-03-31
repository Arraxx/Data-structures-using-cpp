#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char s[n];
for(int i=0;i<n;i++)
{
    cin>>s[i];
}
for(int i=0;i<=n;i++)
{
    if(s[i]>=65 && s[i]<=90)
    {
        s[i] = s[i]+32;
    }
}
s[0] = s[0] - 32;
for(int i=0;i<n;i++)
{
cout<<s[i];
}
return 0;
}