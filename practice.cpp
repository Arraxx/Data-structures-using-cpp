#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(9);
    s.push(2);
   // s.pop();
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top();
}