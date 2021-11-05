#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void problems()
{
    int a[4];
    int count=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    unordered_map<int, int> ak;
    ak[1]=a[0];
    ak[2]=a[1];
    ak[3] = a[2];
    ak[4] = a[3];

    cout<<ak.size();

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int t;
    cin>>t;
    while(t--)
    {
        problems();
    }
 
return 0;
}
