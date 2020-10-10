#include<bits/stdc++.h>
#include<iterator>
#include<vector>

using namespace std;
int main()
{
vector<int> ar= {1,2,3,4,5,6,7};
ar.erase(ar.begin()+3);
for(auto &i : ar){
    cout<<i<<endl;
}
return 0;

}
