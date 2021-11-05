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
 
 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=1;
        for(int i=1;i<=a;i++)
        {
            if((i*i)/i==sqrt(i)*sqrt(i))
            {
                sum = sqrt(i);
            }
        }

       cout<<sum*b<<'\n';
    } 
 
 
return 0;
}
 