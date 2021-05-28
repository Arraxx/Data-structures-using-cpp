
//       1
//      / \
//     2   3
//    / \
//   4  5                  -------------------> 4
//     /
//    6

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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    //int g = lh+rh;
    //return g;
    return 1 + max(lh,rh);
}
int main(){
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->left->right->left = new node(6);


cout<<height(root);
}