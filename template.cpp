#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        int a=0,b=0;
        cin>>a>>b;
        string s[a][b];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>s[i][j];
            }
        }
        int count=0;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(s[i][j] == '.')
                {
                    count++;
                }
            }
            
        }
cout<<count;
  
    return 0;
}