#include"header.h"
void flow(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    flow(n-1);
    
}
void floe(int n)

{
if(n==0)
{
    return;
}
floe(n-1);
cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    flow(n);
    floe(n);
}