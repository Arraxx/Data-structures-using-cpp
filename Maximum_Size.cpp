#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int n=0,m=0;
	cin>>n>>m;
	int a[n][m],c=0,count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cin>>a[i][j];
		}
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		if(a[i][j]==0)
		{
			c++;
		}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(a[i][j]==0 && a[i][j+1]==0)
			{
				count++;
			}
		}
	}
	cout<<(c-count*count)/2<<endl;
}
	
	return 0;
}