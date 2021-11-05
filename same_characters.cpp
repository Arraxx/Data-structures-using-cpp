#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
using namespace std;
 
void special(int n, char a[], char b[])
{
    //converting to ascii value
    priority_queue<int,vector<int>,greater<int>> minh1,minh2;

    for(int i=0;i<n;i++)
    {
        int g = a[i];
        int h = b[i];
        minh1.push(g);
        minh2.push(h);
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<char(minh1.top())<<" "<<minh1.top()<<endl;
    //     minh1.pop();
    // }

    while(n>0)
    {
        if(minh1.top() == minh2.top())
        {
            // cout<<char(minh1.top());
            cout<<char(minh1.top())<<endl;
        }
        else{
            break;
        }
        minh1.pop();
        minh2.pop();

        n--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;

    char a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    special(n,a,b);
return 0;
}
 