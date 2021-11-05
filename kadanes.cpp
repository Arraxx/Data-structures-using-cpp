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
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0,j=0;
    int sum=0;
    int jab=0;
    while(i!=n)
    {
        
        jab+=v[j];
        sum = max(sum,jab);
        j++;
        if(j==n)
        {
            i++;
            j=i;
        }

    }
    cout<<sum;
 
return 0;
}
 