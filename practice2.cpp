#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int d=0,c,a,b;
    cin>>c;
for(int i=0;i<c*c;i++)
{
    a=pow(2,i);
    if(a>c)
    {
        d = i;
        break;
    }
    
}

    b = pow(2,d);
    int max=0;
    for(int i=1;i<b;i++)
    {
        for(int j=1;j<b;j++)
        {

            int g=0,h=0;
            h = i^j;
            if(h == c)
            {
                g = i*j;
            }
            if(g>max)
            {
                max=g;
            }
        }
    }
    cout<<max<<endl;
    }
    return 0;
}