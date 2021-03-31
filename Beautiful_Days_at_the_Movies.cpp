#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i,rem,rev,count=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
    {int x =i;
    while(x!=0){
        rem = x%10;
        rev = rev * 10 +rem;
        x/=10;
    }
        if(abs(i-rev)%c == 0)
        {
            count++;
        }
rev = 0;
    }
    cout<<count<<endl;
return 0;
}