#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;

struct node{
    int t;
    node *left;
    node *right;

    node(int d)
    {
        t = d;
        left = null;
        right=null;

    }
};
// int rights(node* root,vector<int> d)
// {
//     if(root==null)
//     {
//         return 0;
//     }
//     rights(root->right,d);
//     d.push_back(root->t);
    
// }
// int lefts(node* root,vector<int>v)
// {
    
//     if(root==null)
//     {
//         return 0;
//     }
//     lefts(root->left,v);
//     v.push_back(root->t);
// }
void mirror(node* root)
{
    vector<int> v,d;
    // lefts(root, v);
    // rights(root,d);
    if(root==null)
    {
        return ;
    }
    cout<<root->t<<" ";
    mirror(root->left);
    
    mirror(root->right);
    
    // for(auto it : v)
    // {
    //     cout<<it<<" ";
    // }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    mirror(root);


return 0;
}
 