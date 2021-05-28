#include<bits/stdc++.h>
using namespace std;
template <typename t>
class tree{
    public:
    t data;
    tree* left;
    tree*right;
    
    tree(t data)
    {
        this->data = data;
        left=NULL;
        right=NULL;
    }

    ~tree()
    {
        delete left;
        delete right;
    }
};

void printtree(tree<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    if(root->left !=NULL)
    {
        cout<<root->left->data<<" ";
    }
    if(root->right !=NULL)
    {
        cout<<root->right->data<<" ";
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);
}
tree<int>* input(){
  int rootdata;
  cin>>rootdata;
  if(rootdata == -1)
  {
      return NULL;
  }
  tree<int>* root = new tree<int>(rootdata);
  tree<int>* leftchild = input();
  tree<int>* rightchild = input();
  root->left = leftchild;
  root->right = rightchild;
  return root; 

}
int main()
{
    tree<int>* root = input();
    printtree(root);

}