#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int d=0,c=0;
    cin>>c>>d;
    vector<int>a(3),b(3);
    int sum1=0,sum2=0,f,k;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum1>=150 && sum2>=150)
    {
        f = sum1+sum2+d;
    }
    else if(sum1>=150 && sum2<=150)
    {
        f = sum1+d+sum2+c;
    }
    else{
        f = sum1+c+sum2+d;
    }
    
    k = sum1+sum2+2*c;
    if(f<k)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}