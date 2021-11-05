#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
 
using namespace std;

void negative(int n, int k, int a[])
{
    int start=0,end=0,sum=0,mx=0;
    list<int> q;
    while(end!=n)
    {
        
        if(a[end]<0)
        {
            q.push_back(a[end]);
        }
        if(((end-start)+1)!=k)
        {
            end++;
        }
        else if(((end-start)+1)==k)
        {
            if(q.size()==0)
            {
                cout<<"0"<<'\n';
            }
            else
            {
                cout<<q.front()<<'\n';
                if(q.front()==a[start])
                {
                    q.pop_front();
                }
            }
            
            start++;
            end++;
            
        }
    }
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
    negative(n,k,a);

 
 
return 0;
}
 