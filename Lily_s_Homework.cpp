#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count = 0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int min = a[i];
        int mindex = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                mindex = j;
            }
        }
        if(mindex != i)
        {
            count++;
            temp = a[mindex];
            a[mindex] = a[i];
            a[i] = temp;
        }
    }
    cout<<count;
}