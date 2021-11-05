#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007

 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int lower = v.lower_bound(v.begin(),v.end(),2);
    int upper = v.upper_bound(v.begin(),v.end(),2);

    cout<<lower<<" "<<upper;
return 0;
}
