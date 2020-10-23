#include<bits/stdc++.h>
using namespace std;
int main(){
int a[10];
int n,i,j,temp,imin;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];

}
for(i=0;i<n-2;i++)
{
    imin=i;
    for(j=i+1;j<n;j++)
        {
            if(a[j]<a[imin])
               imin=j;
            }

        temp=a[i];
        a[i]=a[imin];
        a[imin]=temp;

    }

for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
return 0;
}
