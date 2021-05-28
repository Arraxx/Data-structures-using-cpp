#include "header.h"
template<typename t>
struct tree{

    public:
        t data;
        vector<tree<int>*> children;
    
    tree(t data)
    {
        this ->data;
    }
};
tree<int>* takeinput(){
    int rootdata;
    cin>>rootdata;
    tree<int>* root = new tree<int>(rootdata);
    int n;
    //cout<<"ENter number  of child nodes of "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        tree<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}
void print(tree<int>* root){
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }

}

int main()
{
    tree<int>* root = takeinput();
    print(root);
}