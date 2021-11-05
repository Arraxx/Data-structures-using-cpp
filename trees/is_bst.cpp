#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
struct node{
    int val;
    node* left;
    node* right;

    node(int data)
    {
        val = data;
        left = null;
        right=null;
    }
};
int postorder(node* root,bool check)
{
    if(root==null)
    {
        return 0;
    }
    if(root->left->val > root->val || root->right->val < root->val)
    {
        check = false;
    }
    postorder(root->left,check);
    postorder(root->right,check);
    return check;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node* root = new node(7);
    root->left = new node(5);
    root->right = new node(9);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->left = new node(8);
    root->right->right = new node(10);
    bool check=true;
    postorder(root,check);
    if(check==true)
    {
        cout<<"t";
    }
    else{
        cout<<"false";
    }
 
return 0;
}
 