// #include<bits/stdc++.h>
// #define null NULL
// #define ll long long int>
// #define mod 1000000007
// #define minh priority_queue<int,vector<int>,greater<int>> minh
// #define maxh priority_queue<int> maxh
 
 
// using namespace std;

// void ans(vector<int> v)
// {
    
//     int a=0,b=0;
//     map<int,int> mp;
//     // mp.clear();
//     for(auto it : v)
//     {
//         mp[it]++;
//     }
    
//     for(auto i : mp)
//     {
//         if(i.first==1)
//         {
//             a = i.second;
//         }
//         else if(i.first==2)
//         {
//             b = i.second;

//         }
//     }
//     // mp.clear();
//     if(a>b)
//     {
//         cout<<"INDIA"<<endl;
//     }
//     else if(b>a)
//     {
//         cout<<"ENGLAND"<<endl;
//     }
//     else{
//         cout<<"DRAW"<<endl;
//     }
    
// }
 
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
 
//     int t;
//     cin>>t;
//     vector<int> v;
//     while(t--)
//     {
//         v.clear();
//         for(int i=0;i<5;i++)
//         {
//             int x;
//             cin>>x;
//             v.push_back(x);
//         }
//         ans(v);
//     }
 
 
// return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    int c=0;
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];

	    }
        for(int i=0;i<3;i++)
        {
            if(a[i]==7)
            {
                c=1;
            }
        }
	    if(c==1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}

 