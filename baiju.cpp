#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][2] = { {1,1}, {1,-1}, {-1,1}, {-1,-1} };
    int t[4] = {1,-1,-1,-1};
    int w[2] = {0, 0}, b = 0, alp = 1, theta = 0;int ep_count = 0, count = 0, i, y_in, y_out;
    int dw1, dw2, db;
while(ep_count < 1){
    cout<<"x1"<<"\t"<<"x2"<<"\t"<<"1"<<"\t"<<"y_in"<<"\t"<<"y_out"<<"\t"<<"t"<<"\t"<<"dw1"<<"\t"<<"dw2"<<"\t"<<"db"<<"\t"<<"w1"<<"\t"<<"w2"<<"\t"<<"b"<<endl;
    for(i = 0; i < 4; i++)
    {
        y_in = arr[i][0]*w[0] + arr[i][1]*w[1] + b;
        if(y_in > theta)
        {
            y_out = 1;
        }
        else if(y_in < -theta){ 
            y_out = -1;
            }
        else
        {
            y_out = theta;
        }
        if(t[i] == y_out)
        {
            dw1 = 0;
            dw2 = 0;
            db = 0;
        }
        else
        {
        dw1 = alp * t[i] * arr[i][0];
        dw2 = alp * t[i] * arr[i][1];
        db = alp * t[i];
        }
        w[0] += dw1;
        w[1] += dw2;
        b += db;
        cout<<arr[i][0]<<"\t"<<arr[i][1]<<"\t"<<1<<"\t"<<y_in<<"\t"<<y_out<<"\t"<<t[i]<<"\t"<<dw1<<"\t"<<dw2<<"\t"<<db<<"\t"<<w[0]<<"\t"<<w[1]<<"\t"<<b<<endl;
        }
        ep_count++;
        }
        return 0;
        }