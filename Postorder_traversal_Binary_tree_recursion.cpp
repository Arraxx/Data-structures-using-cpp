#include<bits/stdc++.h>
using namespace std;
struct node{
    int d;
    node* left;
    node* right;

    node(int data)
    {
        d=data;
        left =NULL;
        right=NULL;
    }
};
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->d<<" ";
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    //levelorder(root);
    postorder(root);
}