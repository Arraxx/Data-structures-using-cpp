#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else{
                d++;
            }
        }
        if(d>=c)
        {
            cout<<"YES"<<endl;
        }
        else{
            int al=0,ap=0,gf=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    al++;
                }
                else if(s[i]=='1'){
                    ap++;
                }
                if(al==ap)
                {
                    gf+=1;
                    break;
                }
            }
            if(gf==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}