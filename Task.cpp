#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f=1;
    while(t--)
    {
        
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0,count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                int min =0;
                min = *min_element(a+i,a+n);
                if(a[j]==min)
                {
                    reverse(a+i,a+j+1);
                    c = j-i+1;
                    count+=c;
                }
                
            }

        }
        

        cout<<"Case #"<<f<<": "<<count<<endl;
        f++;
    }
    return 0;
}