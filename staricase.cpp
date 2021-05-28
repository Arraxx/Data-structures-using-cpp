#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
        int d=i;
        int c=d;
        for(int k=1;k<i+1;k++)
        {
            cout<<d;
            d+=1;
        }
        cout<<endl;
    } 
}