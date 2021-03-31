#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int g=0,h=0;
    g = n-1;
    int a[g];
    h = ((g+1)*(g+2))/2;
    for(long int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(long int i=0;i<n-1;i++)
    {
        h = h-a[i];
    }
    
cout<<h;

}