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
        int n,m,q;
        cin>>n>>m>>q;
        char x;
        int a,count=0,ch=0;
        vector<int>v;
        int ans=0;
        for(int i=0;i<q;i++)
        {
            cin>>x>>a;
            if(x=='+')
            {
                v.push_back(a);
                count++;
            }
            else
            {
                for(int j=0;j<v.size();j++)
                {
                    cout<<v[j]<<" ";
                    if(v[j]==a)
                    {
                        count--;
                        v.erase(v.begin()+j);
                        ans=0;
                        break;
                    }
                    else
                    {
                        //cout<<"aman";
                        ans=1;
                    }
                    
                }
            }
            //cout<<count<<" ";
            if(count>m || ans==1)
            {
                ch=1;
                //cout<<"kumar";
                break;
            }
        }
        if(ch==1)
        {
            cout<<"INc"<<'\n';
        }
        else if(ans==1)
        {
            cout<<"INc"<<endl;
        }
        else{
            cout<<"yes"<<'\n';
        }

    } 
 
return 0;
}
 
