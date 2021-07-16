#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
void sumofsubarray(int n,int k, int a[])
{
    int sum2=0;
    for(int i=0;i<n;i++)
    {int sum=0;
        for(int j=0;j<k;j++)
        {
            sum += a[j];
        }
        if(sum>sum2)
        {
            sum2=sum;
        }
    }
    cout<<sum2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n,k;
    cin>>n>>k;
 
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 

sumofsubarray(n,k,a);
 
return 0;
}
 