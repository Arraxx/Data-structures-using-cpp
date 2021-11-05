#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void mountain(int n, vector<int>v)
{
    int large=0;
    for(int i=1;i<=n-2;)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            int count=1,j=i;
            while(j>=1 && v[j]>v[j-1])
            {
                j--;
                count++;
            }
            while(i<=n && v[i]>v[i+1])
            {
                i++;
                count++;
            }
            large = max(large, count);
        }
        else{
            i++;
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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    mountain(n,v); 
return 0;
}
 