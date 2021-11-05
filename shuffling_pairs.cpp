#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void shuffling()
{
    int n;
    cin>>n;
    vector<int> v;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int sum = (a[i]+i)%2;
        v.push_back(sum);
        cout<<sum<<" ";
    }
    int count=0;
    for(auto& it:v)
    {
        count+=it;
    }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int t;
    cin>>t;
    while(t--)
    {
        shuffling();
    }
 
return 0;
}