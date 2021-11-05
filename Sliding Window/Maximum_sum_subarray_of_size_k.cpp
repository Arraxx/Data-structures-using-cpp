#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
 
using namespace std;

void maximum(int n, int k, int a[])
{
    int start=0,end=0,sum=0,mx=0;
    while(end!=n)
    {
        sum+=a[end];
        if(((end-start)+1)!=k)
        {
            end++;
        }
        else if(((end-start)+1)==k)
        {
            mx = max(mx, sum);
            sum-=a[start];
            start++;
            end++;
            
        }
    }
    cout<<mx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maximum(n,k,a);

 
 
return 0;
}
 