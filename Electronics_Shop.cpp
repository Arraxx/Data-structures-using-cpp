#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,g,j,f,a[1000],b[1000];
    cin>>n>>f>>k;
    for(i=0;i<f;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        cin>>b[i];
    }
int max=-1;
    for(i=0;i<f;i++)
    {
        for(int j=0;j<k;j++)
        {
            g= a[i]+b[j];
            if(g>max && g<=n)
            {
                max = g;
            }
        }
    }
    

    cout<<max<<endl;

}