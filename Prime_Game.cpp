#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define l long
int main(){
    int t;
    cin>>t;
    ll int j;
    while(t--){
       ll int x,y;
        cin>>x>>y;
        ll int i,count=0;

for (i = 1; i <= x; i++) {
 

        if (i == 1 || i == 0)
            continue;
 
        ll int flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        if (flag == 1)
            count++;
    }  
        if(count<=y){
            cout<<"Chef\n";
        }
        else{
            cout<<"Divyam\n";
        }
    }
    return 0;
}