#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void sweet(int n, int d, int a[], int b[])
{
    
    vector<pair<int, int>> s;
    for(int i=0;i<n;i++)
    {
        s.push_back(make_pair(a[i],b[i]));
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i].first<<s[i].second<<endl;
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
    int n,d;
    cin>>n>>d;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sweet(n,d,a,b);
}
 
return 0;
}
 