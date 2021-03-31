#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        
        int c = 2*b;
        int d = 2*a;
        cout<<(c-d)+1<<endl;
    }
    return 0;
}