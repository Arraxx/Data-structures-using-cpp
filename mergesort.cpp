#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr1 [5] = {1,3,4,7};
    int arr2 [3] = {2,5,6};
    int arr3 [7];
    for(int i=0;i<4;i++)
    {
        arr3[i] = arr1[i];
    }
    int c=4;
    for(int j=0;j<3;j++)
    {
        arr3[c] = arr2[j];
        c+=1; 
    }
    //cout<<arr1[1];
    
    sort(arr3,arr3+7);
    //merge(arr1, arr2, arr3, 4,3);
        for(int i=0;i<7;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}