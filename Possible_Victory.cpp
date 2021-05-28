#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,o,c;
    cin>>r>>o>>c;
    int g = r-c;
    int h = 20 - o;
    int i = 36*h;
    
    if(g<i)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}