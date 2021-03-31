#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int fu,ck;
    cin>>fu>>ck;
    int a[fu],b[ck];
    int k=0,l=0;
        for(int i=0;i<fu;i++)
        {
            cin>>a[i];
            k=k+a[i];  
        }
        for(int aman=0;aman<ck;aman++)
        {
            cin>>b[aman];
            l = l+b[aman];
        }
 
        if(k>l)
        {
            cout<<"0"<<endl;
        } 
        
        else {
            sort(a,a+fu);
            sort(b,b+ck);   
         reverse(b,b+ck);
            
            int count =0;
            int j = 0;

        for(int i=0;i<fu;i++)
        {    
                k = k - a[i] + b[j];
                l = l - b[j] + a[i];
                swap(a[i],b[j]);
                count++;
                j++;
                if(k>l){
                    break;     
                }
                
                
        }
        cout<<count<<endl;
        }

    }
return 0;
}