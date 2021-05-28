#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //int c=0;
    for(int i=0;i<n;i++)
    {
        int c=-1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c = a[j];
                //cout<<a[j]<<endl;
                break;
            }
           //cout<<c<<endl; 
        }
       cout<<c<<endl;
    }
    
    return 0;
}*/
//O(n^2)
//stack implementation
int main()
{
int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
}
stack<int>s;
s.push(a[0]);
for(int i=1;i<n;i++)
{
    if(s.empty())
    {
        s.push(a[i]);
        continue;
    }
    while(s.empty()==false && s.top()<a[i])
    {
        cout<<a[i]<<endl;
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
//O(n)