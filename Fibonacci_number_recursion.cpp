#include<bits/stdc++.h>
#define ll long int
using namespace std;
int aman(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    int am = aman(n-1);
    int an = aman(n-2);
    return am+an;
}
int main(){
   int n;
   cin>>n;
   cout<<aman(n);
}
