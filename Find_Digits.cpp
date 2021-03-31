#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
cin>>k;
for(int i=0;i<k;i++)
   {
int n;
    cin>>n;
    
    int tmp = n;
    int count = 0;
    while(tmp!=0)
    {
        int d=tmp%10;
        if(d!=0 && n%d == 0)count++;
        tmp/=10;
    }
cout<<count<<endl;

}
return 0;
}
