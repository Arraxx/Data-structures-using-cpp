#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

    vector<int> ar = {1,3,4,5,66,7,8};
    vector<int> ak = {23,5,67,89};
    vector<int>::iterator it =ar.begin();
    advance(it,5);
    copy(ak.begin(),ak.end(),inserter(ar,it));
    for (int &x : ar)
        cout << x<<endl;
        return 0;
}
