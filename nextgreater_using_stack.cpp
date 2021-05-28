#include<bits/stdc++.h>
using namespace std;
void nextgreater(int a[],int n)
{
    stack<int>s;
    s.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(a[i]);
            continue;
        }
        while(!s.empty() && s.top()<a[i])
        {
            cout<<a[i];
            s.pop();
        }
        s.push(a[i]);
    }
    while(s.empty()==false)
    {
        cout<<"-1"<<endl;
        s.pop();
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    nextgreater(a,n);
}