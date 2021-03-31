#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a(10);
        for(int i=1;i<=10;i++)
        {
            cin>>a[i];
        }
        int k=0;
        cin>>k;
        for(int i=10;i>=1;--i)
        {
            k = k- a[i];
            if(k<0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}