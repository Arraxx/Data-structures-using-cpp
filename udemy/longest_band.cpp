#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
void longest(int n, vector<int> v)
{
    unordered_set<int>s;
    for(auto i : v)
    {
        s.insert(i);
    }
    int large = 1;
    for(auto it : s)
    {
        int pa = it - 1;
        if(s.find(pa)==s.end())
        {
            int next = it+1;
            int cnt=1;
            while(s.find(next)!=s.end())
            {
                next++;
                cnt++;
                
            }
            if(cnt>large)
            {
                large = cnt;
            }
        }
    }
    cout<<large;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 
 longest(n, v);
 
return 0;
}
 