#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int>v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(30);
    v.push_back(2);
    v.push_back(1);
    v.push_back(9);
vector<int>::iterator itr = v.begin();
cout<<*itr<<endl;
cout<<*(itr+2)<<endl;

return 0;
}
