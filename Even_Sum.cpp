#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int a[10000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=a[i];
        }
        int ab =0;
        ab = sum - a[0];
        if(ab%2!=0)
        {
            cout<<"2"<<endl;

        }
        else{
            cout<<"1"<<endl;
        }
   
    }
}