#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void travel(int n, int a, int b)
{
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ++c1;
        }
        else{
            ++c2;
        }
    }
    cout<<(c1*a)+(c2*b)<<'\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,a,b;
        cin>>n>>a>>b;
        travel(n,a,b);
    } 
 
 
return 0;
}
 