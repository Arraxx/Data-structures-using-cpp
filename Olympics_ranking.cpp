#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int g11,g12,g13;
	    int g21,g22,g23;
	    cin>>g11>>g12>>g13>>g21>>g22>>g23;
	    if((g11+g12+g13) > (g21+g22+g23))
	    {
	        cout<<"1"<<'\n';
	    }
	    else
        {
	        cout<<"2"<<'\n';
	    }
	}
	return 0;
}
 