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
        int start=0,end =a;
        int mid = start+(end-start)/2;
        int sum=0;
        cout<<mid<<" ";
        if(mid>=b)
        {
            sum = (abs(b-a))*2;
        }
        else{
            sum = (abs(b-a)+1)*2;
        }
        cout<<sum<<endl;
    }
 
return 0;
}
 