#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define null NULL

using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data = d;
        left=null;
        right=null;
    }
};

void valuesatk(node* root,int k)
{
    if(!root)
    {
        return;
    }
    
    if(k==0)
    {
        cout<<root->data;
    }
    valuesatk(root->left, k-1);
    valuesatk(root->right, k-1);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->right->left = new node(6);
int k;
cin>>k;
valuesatk(root, k);

return 0;
}