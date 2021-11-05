#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
// #define minh priority_queue<int,vector<int>,greater<int>> minh
// #define maxh priority_queue<int> maxh
 
 
using namespace std;

void maxsub(int size, int target, vector<int> v)
{
    int i=0,j=0;
    int b = 0;
    int c;
    priority_queue<int> minh;

    //vector<int> ans;
    while(j!=size)
    {
        if((j-i)+1 != target)
        {
            minh.push(v[j]);
            
            j++;
        }
        else{
            minh.push(v[j]);
            cout<<minh.top();
            if(minh.top()==v[i])
            {
                minh.pop();
            }
            
            i++;
            j++;
            //b=0;
        }
        //b=0;

    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size,target;
    cin>>size>>target;
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    maxsub(size, target, v);
return 0;
}
 