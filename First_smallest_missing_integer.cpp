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
    vector<int>v;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        s.insert(x);
    }
    
    auto it = s.upper_bound(0);
    // cout<<*it;
    if(*it>1){
        cout<<1<<endl;
        return 0;
    }

    else{
        int curr=*it;
        it++;

        for(auto i=it;i!=s.end();i++){
            if(*i!=curr+1){
                cout<<curr+1<<endl;
                return 0;
            }
            curr=*i;
        }

        cout<<curr+1<<endl;
    }


}
