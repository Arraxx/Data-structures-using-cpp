#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}
int main(){
    vector<int>v = {5,6,8,9};
    int a,b;
auto it = upper_bound(v.begin(), v.end(), 6);

v.push_back(100);
vector<int>::iterator it2 = lower_bound(v.begin(), v.end(), 100);

    bool pp = binary_search(v.begin(), v.end(), 6);
    sort(v.begin(), v.end(),f);
   for (int &x:v)
   {
       x++;
   }
    for(int x: v)
    {
        cout<<x<<endl;
    }
}