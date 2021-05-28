
//       1                                           14          
//      / \                                          / \
//     2   3                                        9   0
//    / \                                          / \
//   4  5                  ------------------->   0  0
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int sumoftree(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int sl = sumoftree(root->left);
    int sr = sumoftree(root->right);

    //node* new = root->data;
    int temp = root->data;
    root->data  = sl+sr;
    return temp + root->data;


}
void levelorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* front = q.front();
        cout<<front->data<<endl;
        if(root->left!=NULL)
        {
            q.push(front->left);
        }
        if(root->right!=NULL);
        {
            q.push(front->right);
        }
        q.pop();
    }

}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    sumoftree(root);
    levelorder(root);

}