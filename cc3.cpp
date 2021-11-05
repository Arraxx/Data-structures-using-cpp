#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// void cc()
// {
// 	ll n,p,k;
// 	cin>>n>>p>>k;
// 	multimap<ll, ll> m;
// 	for(ll i=0;i<n;i++)
// 	{
// 		ll mod=0;
// 		mod = i%k;
// 		m.insert({mod,i});	
// 	}
//     ll pos=0;
//     if(p==0)
//     {
//         cout<<pos<<endl;
//     }
//     else{
// 	for(auto& it : m)
// 	{
//         pos++;
//         if(it.second==p)
//         {
//             break;
//         }
// 	}
//     cout<<pos<<"\n";
//     }
// }
void cc(){
	ll n,p,k;
	cin>>n>>p>>k;
	priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> minh;
	for(ll i=0;i<n;i++)
	{
		ll mod=0;
 		mod = i%k;
		minh.push(make_pair(mod,i));
	}
	ll pos=0;
	if(p==0)
	{
		cout<<pos<<endl;
	}
	else{
	while(!minh.empty())
	{
		pos++;
		if(minh.top().second==p)
		{
			break;
		}
		minh.pop();
	}
	cout<<pos<<'\n';
	}
}
int main()
{

	ll t;
	cin>>t;
	while(t--)
	{
		cc();
	}
	return 0;
}