#include"header.h"
struct tree{
    int data;
    tree* left;
    tree* right;
    tree(int val)
    {
        data = val;
        left=NULL;
        right=NULL;
    }

};
void levelorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<tree*> q;
    q.push(root);
    while(!q.empty())
    {
        
        tree* front = q.front();
        
        cout<<front->data<<endl;
        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
        
        q.pop();
    }
    
}
int main()
{
    tree* root = new tree(7);
    root->left = new tree(9);
    root->right= new tree(7);
    root->left->left= new tree(8);
    root->left->right = new tree(8);
    root->left->left->left = new tree(10);
    root->left->left->right = new tree(9);
    root->right->left = new tree(6);
   

    levelorder(root);
}