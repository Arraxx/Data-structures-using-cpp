#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 

 int n;
 cin>>n;
	vector<int> prices;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		prices.push_back(x);
	}
	int ans=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
				cout<<i<<j<<endl;
                cout<<prices[i]-prices[j]<<endl;
                // ans = max((prices[i]-prices[j]),ans);
            }
        }
        // cout<< ans;
    
 
 
return 0;
}
 