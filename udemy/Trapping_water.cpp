#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void water(int n, vector<int>a)
{
    vector<int> v,d;
    int h = 0, g=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h = a[i];
            v.push_back(h);
        }
        else{
            v.push_back(h);
        }
        
        
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>g)
        {
            g = a[i];
            d.push_back(g);
        }
        else{
            d.push_back(g);
        }
    }

    reverse(d.begin(),d.end());
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int mi = min(d[i], v[i]) - a[i];
        sum+=mi;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<d[i]<<" ";
    // }
    cout<<sum;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    } 
 water(n, a);
 
return 0;
}
 