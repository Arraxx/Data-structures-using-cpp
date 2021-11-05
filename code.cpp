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
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    v.erase(v.begin()+2);
    for(auto& it : v)
    { 
        cout<<it<<" ";
    }

 
return 0;
}
 