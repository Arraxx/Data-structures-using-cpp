#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

int pairsum(vector<int>v, int target)
{
    unordered_set<int> s;
    vector<int> vv;
    for(int i=0;i<v.size();i++)
    {
        int ans = abs(target-v[i]);
        if(s.find(ans)!=s.end())
        {
            cout<<ans<<" "<<i<<endl;
        }
        s.insert(v[i]);
    }

    //return {};
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,target;
    cin>>n>>target;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    pairsum(v,target);
    // cout<<p[0]<<" "<<p[1];
 
return 0;
}
 