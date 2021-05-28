#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count1 = 0, count2 =0, count3= 0;
        char a[3][3];
        for(ll i=0;i<3;i++)
        {
            for(ll j=0;j<3;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='X')count1++;
                if(a[i][j]=='O')count2++;
                if(a[i][j]=='_')count3++;
            }
        }
        ll b = 0, c = 0;
        if(a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')b=1;
        if(a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')b=1;
        if(a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')b=1;
        if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')b=1;
        if(a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')b=1;
        if(a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')b=1;
        if(a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')b=1;
        if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')b=1;
        
        if(a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')c=1;
        if(a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')c=1;
        if(a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')c=1;
        if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')c=1;
        if(a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')c=1;
        if(a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')c=1;
        if(a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')c=1;
        if(a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')c=1;

        if((b == 1 && c == 1) || ((count1-count2)<0) || (count1-count2)>1)
        {
            cout<<3<<"\n";
        }
        else if(count1 == 0 && count2 == 0 && count3 == 9)cout<<2<<"\n";
        else if(b == 1 && c == 0 && count1 > count2)cout<<1<<"\n";
        else if(b == 0 && c == 1 && count1 == count2)cout<<1<<"\n";
        else if(b == 0 && c == 0 && count3 == 0)cout<<1<<"\n";
        else if(b == 0 && c == 0 && count3 > 0)cout<<2<<"\n";
        else 
        {
            cout<<3<<"\n";
        }
    }
    return 0;
}