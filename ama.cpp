#include<bits/stdc++.h>
using namespace std;
 int printStepNumber(int n,int last,int total){
     if(last%n!=0)
     {
        return -1; 
     }
    int res = log(last)/log(n);
    return (total - res);
 }
int main(){

    int n, last, total;
    cin>>n>>last>>total;

    int result = printStepNumber(n,last,total);
    if(result<0)
    {
        cout<<"invalid input";
    }
    else{
        cout<<result;
    }
return 0;
}
 