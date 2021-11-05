#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void varsize(int n, int t, vector<int>v)
{
    int i=0,j=0;
    int sum=0, cnt=0;
    while(j<n)
    {
       
        if(sum==t)
        {
            cout<<cnt<<endl;
            j++;
            cnt++;
                        
        }
        else if(sum<t)
        {
            sum +=v[j];
            j++;
            cnt++;
        }
        else 
        {
            sum-=v[i];
            i++;
            //j++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,t;
    cin>>n>>t;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    varsize(n,t,v);
return 0;
}
 