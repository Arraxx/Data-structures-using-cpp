#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        int a[10000];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int g=0,h=0;
        sort(a+n,a);
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        if(a[i]%2 == 0)
        {
            g+=a[i];
        }
    }
    else {
        if(a[i]%2 == 1)
        {
            h+=a[i];
        }
    }
}
if(g>h){
    cout<<"Alice"<<endl;
}
else if(g<h){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Tie"<<endl;
}

    }
    return 0;
}