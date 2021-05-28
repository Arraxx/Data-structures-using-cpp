#include "header.h"
int main()
{
    int a,b;
    cin>>a>>b;
    int c[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<c[i][j];
        }
        cout<<"\n";
    }

}