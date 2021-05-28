#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int a[n];
    int sum=0, ak = 0;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>x;
    ak = x;
    if(sum<x)

    {
        cout<<"-1"<<endl;
    }
    else{
        int s =0 ,c =0,count=0;
        for(int i=1;i<=n;i++)
        {
            x-=a[i];
            count++;
            if(x== 0)
            {
                c = count;
                break;
            }
            else{
                c = -1;
            }
        }
        //cout<<c<<endl;
        int d =0 ,e =0,cou=0;
        for(int i=n; i>0 ;i--)
        {
            ak-=a[i];
            cou++;
            if(ak==0)
            {
                e = cou;
                break;
            }
             else{
                e = -1;
            }
        }
        //cout<<e;
        if(c==-1)
        {
            cout<<e;
        }
        else if(e ==-1)
        {
            cout<<c;
        }
        else if(c<e)
        {
            cout<<c;
        }
        else{
            cout<<e;
        }
        
    }
}