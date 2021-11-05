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
    cin>>n>>m;
    if(m==5000)
    {
        cout<<"1"<<endl;
    } 
    else{
        int sol=0;
        for(int i=1;i<=n;i++)
        {
            sol =5000*i;
            int c=sol,g=0;
            while(c!=m)
            {
                c+=5000+g;
                cout<<c<<" ";
                if(c>m)
                {
                    break;
                }
                if(g>50)
                {
                    break;
                }
                g++;

            }
            
            if(c==m)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
 
return 0;
}
