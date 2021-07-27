#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
 
using namespace std;
//Using Priority Queue
void next(int n, int a[], int k)
{
    priority_queue<int,vector<int>,greater<int>> maxh;

    for(int i=0;i<n;i++)
    {
        maxh.push(a[i]);
    }
    int am=0;
    while(a[am]!=k)
    {
        maxh.pop();
        am++;
    }
    maxh.pop();
    maxh.pop();
    cout<<maxh.top();
    
}


//Using Stack
/*void next(int n, int a[], int k)
{
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        s.push(a[i]);
    }
    int j=0;
    while(s.size()!=null)
    {
        if(s.top()>k)
        {
            j = s.top();
            s.pop();
        }
        if(j>)
    }
}
*/
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

next(n,a,k);
 
return 0;
}
 