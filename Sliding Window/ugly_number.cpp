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
 
    int i=1,c=1;
        if(n==1)
        {
            c=1;
        }
        else{
        while(n>1)
        {
            if(i%2==0 || i%3==0 || i%5==0)
            {
                c=i;
                i++;
                n--;
            }
            else{
                i++;
            }
            
        }
        }
        cout<<c;
 
 
return 0;
}
 