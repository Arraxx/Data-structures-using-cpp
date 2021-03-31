#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    if(n<=1){
        cout<<arr[0];
    }
    else{
        int g = n/2;
        sort(arr,arr+n);
        reverse(arr,arr+n);
            for(int c = 0;c<g;c++)
            {
                sum = sum + arr[c];
                          
            }

        cout<<sum<<endl;      
    }
}