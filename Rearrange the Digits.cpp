#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d = n;
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    } 
    //cout<<count;
   int a[count],c=0,i=0;
    /*while(n!=0)
    {
        c =  n/10;
        a[i] = c;
        n = n/10;
        i++;
    } */
    
    for(int i=0;i<count;i++)
    {
        c = d/10;
        a[i] = d;
        
        d/=10;
        cout<<c;
    }
}