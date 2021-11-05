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
void levelorder(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* top = q.front();
        if(top==null)
        {
            return;
        }
        else{
            q.pop();
            cout<<top->d<<" ";
            if(top->right)
            {
                q.push(top->right);
            }
            if(top->left)
            {
                q.push(top->left);
            }
            
        }
    }

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

    levelorder(root);
    
 
 
return 0;
}
 