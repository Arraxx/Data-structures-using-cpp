#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int p=1;
    for(int i=1;i<=n;i++)
    {
        p *=i;
    }
cout<<p<<endl;
}