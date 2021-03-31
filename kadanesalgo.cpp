#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int summ=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    summ += a[i];
}
int sum = 0;
while(summ>0 || sum>9)
{
    sum += summ%10;
    summ /= 10;
}
cout<<sum;
}