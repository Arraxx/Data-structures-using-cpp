#include<bits/stdc++.h>
#define null NULL
using namespace std;
struct node{
    int data;
    node* left;
    node*right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
void zizagtraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*> stack1;
    stack<node*> stack2;

    stack1.push(root);
    bool d = true;
    while(!stack1.empty())
    {
        node* front = stack1.top();
        stack1.pop();

        if(front)
        {
            cout<<front->data<<endl;

            if(d)
            {
                if(front->left)
                {
                    stack2.push(front->left);
                }
                if(front->right)
                {
                    stack2.push(front->right);
                }
            }
            else{
                if(front->right)
                {
                    stack2.push(front->right);
                }
                if(front->left)
                {
                    stack2.push(front->left);
                }
            }
        }
        if(stack1.empty())
        {
            d =! d;
            swap(stack1, stack2);
        }
    }
    
}


int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);

    zizagtraversal(root);
    return 0;
}