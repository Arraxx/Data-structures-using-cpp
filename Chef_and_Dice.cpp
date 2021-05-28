#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll total =0;
        total = (n/4)*44;
        ll top = (n%4);
        if(n>=4)
        {
            if(top == 0)
            {
                total += 16;
            }
            if(top == 1)
            {
                total +=32;
            }
            if(top == 2)
            {
                total += 44;
            }
            if(top == 3)
            {
                total += 55;
            }
            cout<<total<<endl;
        }
        else{
            int hunger = 0;
            if(top == 1)
            {
                hunger += 20;
            }
            if(top == 2)
            {
                hunger += 36;
            }
            if(top == 3)
            {
                hunger +=51;
            }
            cout<<hunger<<endl;
        }
    }
    return 0;
}