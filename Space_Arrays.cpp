#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int g=0,h=0;
        for(int i=0;i<n;i++)
        {int c=0;
        if(a[i]>i+1)
        {
            h=1;
            break;

        }
        else{
            c = i+1-a[i];
            g = g+c;
        }
        }
        if(g%2==0 || h==1)
        {
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
        
    }
    return 0;
}