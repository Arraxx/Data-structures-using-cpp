#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void pairs(int s, vector<int> v)
{
    unordered_set<int> se;
    vector<int> ans;
    for(int i=0;i<v.size();i++)
    {
        int x = s - v[i];
        if(se.find(x)!=se.end())
        {
            ans.push_back(x);
            // 
            ans.push_back(v[i]);
            return ans;
            if(ans.size()==0)
            {
                cout<<"NO"<<'\n';
            }
            else{
                cout<<ans[0]<<ans[1];
            }
        }
        se.insert(v[i]);
    }
    return {};

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int s;
    cin>>s;
    // int a[n];
    vector<int> v{10, 5, 2, 3, -6, 9,11};

    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    //     v.push_back(a[i]);
    // }

    //auto p = 
    pairs(s,v);
    // if(p.size()==0)
    // {
    //     cout<<"NO"<<'\n';
    // }
    // else{
    //     cout<<p[0]<<p[1];
    // }

 
 
return 0;
}
 