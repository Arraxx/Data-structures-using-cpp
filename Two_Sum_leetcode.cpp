#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,target;
    cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        
        int num = target - v[i];
        if(s.find(num)!=s.end())
        {
            cout<<v[i]<<" "<<num<<'\n';
        }

    }
 
 
return 0;
}
 