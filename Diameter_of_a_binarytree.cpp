//   1
//  / \
// 2   3
//  \  / \                     ------------->      5
//  4  5  6
//  / \
//  7  8

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int d){
    data =d;
    left=NULL;
    right =NULL;
}
};
int heightoftree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = heightoftree(root->left);
    int rh = heightoftree(root->right);
}
int diameteroftree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int dh = heightoftree(root->left) + heightoftree(root->right);
    int dl = diameteroftree(root->left);
    int dr = diameteroftree(root->right);

    return max(dh,max(dl,dr));

}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->left->right->left = new node(7);
    root->left->right->right = new node(8);

    cout<<diameteroftree(root);
}