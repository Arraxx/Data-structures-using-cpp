#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
using namespace std;
void ugly(int n)
{
    priority_queue<int> maxh;
    int d=1;
    if(n==1)
    {
        maxh.push(1);
    }
    else{
    while(n!=0)
    {
        if(d==1 || d%2==0 || d%3==0 || d%5==0)
        {
          n--;
          maxh.push(d);
        }
    d++;
    }
    }
    cout<<maxh.top();

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;

    ugly(n);
 
 
return 0;
}
