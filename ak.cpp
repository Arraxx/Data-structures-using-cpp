#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
void seti(int t, int a[])
{
    unordered_set<int> s;
    for(int i=0;i<t;i++)
    {
        s.insert(a[i]);
    }
    for(auto& it : s)
    {
        cout<<it<<'\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    
    seti(t,a);
 
return 0;
}