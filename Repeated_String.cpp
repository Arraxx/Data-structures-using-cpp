#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n,g;
    string s;
    cin>>s;
    cin>>n;
    g = n/2;
    while(g--)
    {
        s.append(s);
    }
    cout<<s;
}