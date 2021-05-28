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
        right =NULL;
    }
};
void countnodes(node* root)
{
    if(root==NULL)
    {
        return;
    }
    int count=0;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* front = q.front();
        if(front->data >= 5 && front->data <= 45 )
        {
            count++;
        }
        q.pop();
        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
        
        
    }
    cout<<count;
}
int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(50);
    root->left->left = new node(1);
    root->right->left = new node(40);
    root->right->right = new node(100);
    root->left->right= new node(20);

    countnodes(root);

}