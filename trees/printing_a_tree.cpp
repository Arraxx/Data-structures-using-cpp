#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
struct node
{
    int t;
    node *left;
    node *right;

    node(int n)
    {
        t = n;
        left = NULL;
        right = null;
    }
};

int printingtree(node* root)
{
    int d=0;
    if(root==null)
    {
        return 0;
    }
    // cout<<root->t;            //printing a tree;
    //depth of a tree
    else{
    int ld = printingtree(root->left);
    int rightd = printingtree(root->right);
    // d = max(d,(ld+rightd));
    return ld+rightd+1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(5);
    root->left->left->right = new node(5);

    root->left->right = new node(6);
    root->right = new node(31);
    root->right->right = new node(313);


cout<<printingtree(root);
 
return 0;
}
 