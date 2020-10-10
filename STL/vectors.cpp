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
    for(auto i=v.begin();i!=v.end();i++)
    {

        cout<<"Printing output for the vector"<<*i<<endl;
    }

for(auto i=v.crbegin();i!=v.crend();i++)
    {

        cout<<"Printing reverse output for the vector"<<*i<<endl;
    }

return 0;
}
