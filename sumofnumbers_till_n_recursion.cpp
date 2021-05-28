#include<bits/stdc++.h>
#define ll long int
using namespace std;
int aman(int n)
{
    
    if (n!=0){
        return n + aman(n-1);
    }
    return 0;
}
int main(){
   int n;
   cin>>n;
   cout<<aman(n);
}
