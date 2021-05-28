#include<bits/stdc++.h>
using namespace std;

struct tree{
    
    int data;
    tree *left;
    tree *right;

    tree(int value)
    {
    data = value; 
    left = NULL;
    right = NULL;
    }
};

void leftview(tree* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<tree*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();
        for(int i=1;i<=n;i++)
        {
            tree* temp = q.front();
            q.pop();

            if(i==1)
            {
                cout<<temp->data<<endl;
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}

int main(){
    tree* root = new tree(1);
    root->left = new tree(2);
    root->right= new tree(3);
    root->left->left= new tree(4);
    root->left->right = new tree(5);
    root->left->left->left = new tree(6);
    root->right->right = new tree(7);
    root->right->right->right = new tree(8);
    root->right->right->right->right = new tree(9);


    leftview(root);
}