#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int g=n-2;
    int aman=0;
    int sum=0,sum1=1,sum2=g;
    for(int i=1;i<=n-2;i++)
    {
        sum+=i;
    }
    for(int i=2;i<=n-2;i++)
    {
        if(sum1<g)
        {
            sum1+=i;
        }
        if(sum1>sum2)
        {
            g--;
            sum2+=g;
            
        }
        if(sum1==sum2)
        {
            aman +=1;
            break;
        }
    }
    if(aman==1)
    {
        cout<<sum-(sum1+sum2);
    }
    return 0;
}