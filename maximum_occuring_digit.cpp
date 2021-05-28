#include"header.h"
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d=0;
    for(int i=0;i<n;i++)
    {
        int count=0,c=0,max=0;
        while(a[i]!=0)
        {
            c = a[i]/10;
            if(c==0)
            {
                count++;
            }
            a[i]=a[i]/10;
        }
        
        cout<<count<<endl;
        
        if(count>=max)
        {
            max = count;
            d = a[i];
        }
        if(a[i]<=d)
        {
            d = a[i];
        }
    }
    cout<<d<<endl;
}