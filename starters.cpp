#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
 
using namespace std;
 
int main(){
 int t;
 cin>>t;
 while(t--)
 {
    int k,c,n;
    cin>>k>>c>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    map<int, int> m;
    for(int i=0;a[i];i++)
    {
        if(m.find(a[i])==m.end())
        {
            m[a[i]]=1;
        }
        else{
            m[a[i]]++;
        }
    }
    for(auto& am : m)
    {
       // if(am.second>1 && am.first!=-1)
        //{
            cout<<am.first<<" "<<am.second;
       // }
    }
    cout<<endl;
 }
return 0;
}