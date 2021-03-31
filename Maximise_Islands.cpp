#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        char s[a][b];
        int m=0,count=0;
        for(int i=0;i<a;i++)
        { int c=0,d=0;
            for(int j=0;j<b;j++)
            {
                cin>>s[i][j];
                
                if(s[i][j]=='.')
                {
                    
                    c++;
                }
                else{
                    d++;
                }
            }
            if(c==0){
                m+=1;
                count=m;
            }
            else if(c!=0 && c>=d)
            {
                m = b-1-d;
                count+=m; 
            }
        }
        cout<<count<<endl;

    }
    
    return 0;
}