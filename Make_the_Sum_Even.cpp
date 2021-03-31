#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int sum=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
        {
            cout<<"0"<<endl;
        }
        else{
            for(int i=0;i<n;i++)
            {
                int p=0;
                p = a[i]/2-1;
                if(p<0)
                {
                    p=0;
                }
                if((sum-p)%2==0)
                {
                    cout<<p<<endl;
                    break;
                
                }
            }
        }

    }
}