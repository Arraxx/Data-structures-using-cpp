#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100000];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if((sum/3) == a[0])
        {
            cout<<"0"<<endl;
        }
        else{
        int count=0;
        
        for(int i=0;i<n;i++)
        {

            if(a[i]%2 != 0){
                count++;
            }
            
        }
        cout<<count<<endl;
        }
    }
}