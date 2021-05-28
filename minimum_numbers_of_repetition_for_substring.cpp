#include<bits/stdc++.h>
using namespace std;
bool ifcontinue(string s1,string s2)
{
    int am = s1.size();
    int an = s2.size();
    for(int i=0;i<=an-am;i++)
    {
        int j;
        for(j=0;j<am;j++)
        {
            if(s1[i+j]!=s2[j])
            {
                break;
            }
        }
        if(j==am)
        {
            return true;
        }
        

    }
    return false;

}
int minimum(string a, string b)
{
    string s = a;
    int ans=1;
    while(s.size()<a.size())
    {
        ans++;
        s+=a;
    }
    if(ifcontinue(b,s)==true)
    {
        return ans;
    }
    if(ifcontinue(b,s+a)==true)
    {
        return ans+1;
    }
    return -1;
    
}
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<minimum(a,b);
}