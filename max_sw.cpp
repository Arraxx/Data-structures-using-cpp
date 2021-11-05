#include<bits/stdc++.h>
using namespace std;
void maxsum(int n, int ss, int a[])
{
	int start=0,end=0,sum=0,mx=0;
	while(end<n)
	{
		// int mx = 0;
		sum +=a[end];
		if((end-start+1)==ss)
		{
			mx=max(mx,sum);
			sum -= a[start];
            end++;
			start++;
		}
		else if((end-start+1)<ss)
		{
			end++;
		}
        
	}
	cout<<mx;
}
int main()
{
	
	int n,ss;
	cin>>n>>ss;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	maxsum(n,ss,a);
    return 0;
}