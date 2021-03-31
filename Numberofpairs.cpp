#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int count=0;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            int ds = 1,algo=1;
            while(b[j]!=0)
            {
                
                ds *= a[i];
                b[j]--;
            }
            while(a[i]!=0)
            {
                
                algo *= b[j];
                a[i]--;
            }
            if(ds>algo)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}