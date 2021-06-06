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
        left=NULL;
        right = null;
    }
};
int last(node* root, int& count){
if(!root)
{
    return 0;
}
if(root->left == null && root->right == null)
{
    cout<<root->data;
   // count++;
}
last(root->left,count);
return count;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

node* root = new node(1);
root->left = new node(2);
root->right= new node(3);
root->left->left =new node(4);

root->left->left->right =new node(9);
//4
int count=0;
last(root,count);
 
 
return 0;
}