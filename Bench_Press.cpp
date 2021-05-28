#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,wr;
        cin>>n>>w>>wr;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        int g=0;
        g = sum+wr;
        
        if((g%2)==0)
        {
            cout<<"YES"<<endl;
        }

        else{
            cout<<"1";
            int am = 0;
            for(int i=n;i>0;i--)
            {
                g-=a[i];
                if((g%2)==0)
                    {
                        am+=1;
                        break;
                    }
            }
            if(am == 1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
}