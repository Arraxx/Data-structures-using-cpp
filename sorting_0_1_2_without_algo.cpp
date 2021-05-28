#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]== 0 )
        {count0++;
        }
        if(arr[i]== 1){
            count1++;
            }
        if(arr[i]== 2){
            count2++;
            }
    }
    //cout<<count2;
    int c=0;
    while(count0!=0)
    {
        arr[c]=0;
        c+=1;
        count0--;
    }
    while(count1!=0)
    {
        arr[c]=1;
        c+=1;
        count1--;
    }
    while(count2!=0)
    {
        arr[c]=2;
        c+=1;
        count2--;
    }
    
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
return 0;
}