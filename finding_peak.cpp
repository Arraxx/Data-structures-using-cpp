#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

void binarysearch(int n,vector<int> v)
{
    int start =0,end = n-1;
    // int ans=0;
    //     // for(int i=0;i<nums.size();i++)
    //     // {
    //     //     if(nums[i]>nums[i+1]&& nums[i]>nums[i-1])
    //     //     {
    //     //         ans = i;
    //     //         break;
    //     //     }
    //     // }
    //     if(nums.size()<2)
    //     {
    //         ans=0;
    //     }
    //     else if(nums.size()==2)
    //     {
    //         if(nums[0]>nums[1])
    //         {
    //             ans = 0;
    //         }
    //         else{
    //             ans=1;
    //         }
            
    //     }
    //     else{
    //     bool aman = false;
    //     int ans2=0;
    //     int start=0,end=nums.size()-1;
    //     int mid = start + (end-start)/2;
        
    //     for(int i=0;i<mid;i++)
    //     {
    //         if(nums[i]>nums[i+1]&& nums[i]>nums[i-1])
    //         {
    //             aman = true;
    //             ans2=i;
    //             break;
    //         }
    //     }
    //     for(int i=mid;i<=end;i++)
    //     {
    //         if(nums[i]>nums[i+1]&& nums[i]>nums[i-1])
    //         {
    //             aman =  true;
    //             ans2=i;
    //             break;
    //         }
    //     }
    //         if(aman == true)
    //         {
    //             ans = ans2;
    //         }
    //         else{
    //             if(nums[0]>nums[nums.size()-1])
    //             {
    //                 ans = 0;
    //             }
    //             else{
    //                 ans = nums.size()-1;
    //             }
    //         }
    //     }
        
    //     cout<<ans;

    // int start =0;
    // int end = n-1;
    while(start<end)
    {
        int mid = start+(end-start)/2;
        if(v[mid]>v[mid+1])
        {
            end = mid;
        }
        else{

            start = mid+1;
        }
        // cout<<start;
    }
    cout<<start;
        
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    // cout<<n;
    binarysearch(n,v);
return 0;
}
 