#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
    if(n==1)
   {return 1;}

else
   { 
       return n * factorial(n - 1);}
}
int main()
{
long long int n;
cin>>n;
cout<<factorial(n);
return 0;}
