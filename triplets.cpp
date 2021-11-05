#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

int tripletsum(vector<int>v, int target)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-3;i++)
    {
        int j=i+1;
        int k = v.size()-1;
        while(j<k)
        {
            int csum = v[i];
            csum+=v[j];
            csum+=v[k];
            if(csum==target)
            {
                cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<'\n';
                j++;
                k--;
            }
            else if(csum>target)
            {
                k--;
            }
            else{
                j++;
            }

        }
    }
    

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    int n, target;
    cin>>n>>target;
    int a[n]; 
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    tripletsum(v,target);
 
 
return 0;
}
 