#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int d = pow(10,n-1);
    if(n%2!=0)
    {
        d+=1;
    }
    
   for(int i=0;i<n;i++)
    {
        c += a[i]*d;
        d/=10;
   }
   c+=1;
   cout<<c<<endl;
   int count=0,ak = c;
   while(ak!=0)
   {
       count++;
       ak/=10;
   }
   int kk = pow(10,count-1);
   if(count%2!=0)
   {
       kk+=1;
   }
   int f=0;
   cout<<kk<<endl;
    for(int i=0;i<count;i++)
    {
        
        f = c/kk;
        b[i] = f;
        c = c - f*kk;
        kk/=10;
    }
    //reverse(b.begin(), b.end());
    for(int i=0;i<count;i++)
    {
        cout<<b[i]<<" ";
     }
}