#include<bits/stdc++.h>
#define null NULL
#define ll long long int>
#define mod 1000000007
#define minh priority_queue<int,vector<int>,greater<int>> minh
#define maxh priority_queue<int> maxh
 
 
using namespace std;
 
 
struct node{
    int d;
    node* left;
    node* right;

    node(int data)
    {
        d = data;
        left = null;
        right=null;
    }
};
void traversal(node *root, int x, map<int, vector<int>> &mp)
{
    if(root==null)
    {
        return ;
    }
    mp[x].push_back(root->d);
    traversal(root->left, x-1, mp);
    traversal(root->right, x+1, mp);
}
void verticalorder(node* root)
{
    map<int, vector<int>> mp;
    int x=0;
    traversal(root,x,mp);
    for(auto it : mp)
    {
        // int ff = it.first;
        vector<int> key = it.second;
        for(auto ans:key)
        {
            cout<<ans<<" ";
        }
        // cout<<endl;
    }
    return ;

    
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

    verticalorder(root);
 
return 0;
}
 