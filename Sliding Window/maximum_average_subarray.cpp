#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void maximum(int n, int k, vector<int>v)
{
    int i=0,j=0;
    int sum=0,cool=0;
    if(n==1)
    {
        cout<<float(v[0]);
    }
    else{
    while(j<n)
    {
        if((j-i)+1!=k)
        {
            sum+=v[j];
            j++;
        }
        else{
            sum+=v[j];
            if(sum>cool)
            {
                cool = sum;
            }
            sum-=v[i];
            i++;
            j++;
        }
    }
    cout<<float(cool/k);
}
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,k;
    cin>>n>>k;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    maximum(n, k, v);
 
 
return 0;
}
 