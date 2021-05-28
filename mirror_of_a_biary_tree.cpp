//       1                                               1
//      / \                                             /  \
//     2   3                                           3    2 
//    / \                                                   / \
//   4  5                  ------------------->            5   4
//     /                                                  /    
//    6                                                  6

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left=NULL;
        right=NULL;
    }

};
void mirror(node* root)
{
    
    if(root == NULL)
    {
        return;
    }
    else{
        struct node* temp;
        mirror(root->left);
        mirror(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
void inorder(node* root)
{
   if(root==NULL)
   {
       return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);
    mirror(root);
    inorder(root);
}