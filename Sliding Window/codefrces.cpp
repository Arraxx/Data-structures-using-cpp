#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> numbers;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        numbers.push_back(q);
    }
 
    vector<int> v;
    sort(numbers.begin(), numbers.end());
    
     for(int k=0;k<numbers.size()-1;k++)
     {
        
        int x=numbers[k+1]-numbers[k];
        v.push_back(x);
        // cout<<v[1]<<endl;
     }
    sort(v.begin(),v.end());
    int i=0,j=0;
    int min = v[0];
    //cout<<min;
    while(j!=numbers.size())
    {
        if((j-i)+1==2)
        {
            int a = abs(numbers[j]-numbers[i]);
            if(a==min)
            {
                //min = a;
                cout<<numbers[i]<<" "<<numbers[j]<<'\n';
            }
            i++;
            j++;
        }
        else{
            j++;
        }
    }
 
 
return 0;
}
 