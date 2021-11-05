#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;



void bfs(int n, vector<vector<int>>arr)
{
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(0);
    }
    queue<int> q;
    for(int i=1;i<n+1;i++)
    {
        if(v[i]==0)
        {
            
            q.push(i);
            v[i]=1;
            while(!q.empty())
            {
                int node  = q.front();
                cout<<q.front()<<" ";
                q.pop();
                
                for(auto j : arr[node])
                {
                    if(v[j]==0)
                    {
                    q.push(j);
                    v[j]=1;
                    }
                }
                
            }
        }
    }
    // cout<<"am";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,m;
    cin>>n>>m; //m=no of nodes, n= no of edges
    vector<vector<int>> arr(n+1);
    for(int i=1;i<=n;++i)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    cout<<"ak";
    bfs(n, arr);



 
return 0;
}
 