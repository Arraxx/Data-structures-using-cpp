#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,a[10000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=0,g=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            g = a[i]-a[j];
            if(g>=0 && g>max)
            { if()
                max = g;
            }
        }
    }
    cout<<max;
}