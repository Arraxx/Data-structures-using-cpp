#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void print(int n, vector<vector<int>> arr)
{
    //cout<<" mohit bhadwa";
    for(int i=0;i<arr.size();i++)
    {
        // cout<<i<<":";
        for(auto it : arr[i])
        cout<<it<<" ";  
        cout<<'\n';     
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    // vector<int> temp;
    vector<vector<int>> arr(6);
    for(int i=1;i<=n;i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    // cout<<" mohit bhadwa";

    print(n ,arr);
 
return 0;
}
 