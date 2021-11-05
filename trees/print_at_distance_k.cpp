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
void postorder(node* root,int count)
{
    if(root==null)
    {
        return ;
    }
    if(count==0)
    {
        cout<<root->val<<" ";
    }
    postorder(root->left,count-1);
    postorder(root->right,count-1);
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
    root->right->left = new node(6);
    root->right->right = new node(7);
    int count=1;
    postorder(root,count);
 
return 0;
}
 