#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {   int sum=0;
        for(int j=1;j<=k;j++)
        {
            sum+=a[j];
        }
        v.push_back(sum);
    }
    int count=0;
    for(auto& it : v)
    {
        if(it<x)
        {
            count+= -1;
        }
        if(it>y)
        {
            count+=1;
        }
        else{
            count+=0;
        }
    }
    cout<<count;
 
return 0;
}
