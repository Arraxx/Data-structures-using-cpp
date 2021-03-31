#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k];
        string b,c;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }

            cin>>b;


            cin>>c;

        int e=0,d=0;
        for(int i=0;i<k;i++)
        {
            if(b[i]=='1')
            {
                e =e + a[i];
            }
        }

        cout<<e<<endl;

        for(int i=0;i<k;i++)
        {
            if(c[i]=='1')
            {
                d = d + a[i];
            }
        }

        cout<<d<<endl;


    }
    return 0;
}