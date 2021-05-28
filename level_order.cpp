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
        cout<<front->d<<endl;
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

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    levelorder(root);
    
}