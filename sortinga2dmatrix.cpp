#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int a[n][n],temp[n*n];
    int c = n*n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[k]  = a[i][j];
            k++;
        }
    }
    k = 0;
    sort(temp,temp+c);
    for(int i=0;i<n;i++)
    { for(int j=0;j<n;j++)
        {
        a[i][j] = temp[k];
        k++;
        }

    }
        for(int i=0;i<n;i++)
    { for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}