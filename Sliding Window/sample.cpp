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
 
 
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        string a = s/10;
        s/=10;
        cout<<a;
    }
 
 
return 0;
}
 