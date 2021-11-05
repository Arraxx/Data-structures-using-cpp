#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
void beautiful(int n, int a[]){
int count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {}
        else{
            if(float (a[i]-a[j])/a[i] < float (a[i]-a[j])/a[j])
            {
                count++;
            }
        }
    }
   
}
 cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int t;
    cin>>t;
 while(t--){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     beautiful(n,a);
 }
return 0;
}
 