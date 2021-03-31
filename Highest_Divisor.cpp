#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0,max=0;
    for(int i=1;i<=10;i++)
    {
        c = n%i;
        if(c==0)
        {
            if(i>max)
            {
                max =i;
            }
        }
    }
    cout<<max;
}