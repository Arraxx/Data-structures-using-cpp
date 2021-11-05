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
 
 
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    
    int count=0,c=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            
            // if(sum==m)
            // {
            //     count+=1;
            //     break;
            // }
            if(sum>m)
            {
                sum-=a[j];
            }
            //cout<<sum<<'\n';
        }
        cout<<sum<<'\n';
        c++;
    }
    cout<<count<<endl;
return 0;
}
 