#include<bits/stdc++.h>
using namespace std;
string reverse(string n)
{
    int a = n.size();
    for(int i=0;i<a/2;i++)
    {
        swap(n[i],n[a-i-1]);
    }
    return n;
}
void remove(string n){
    n = reverse(n);
    int i=0;
    while(n[i]=='0')
    {
        i++;
    }
    n.erase(0,i);
    cout<<n;
}
int main()
{
    string n;
    cin>>n;

    remove(n);
}