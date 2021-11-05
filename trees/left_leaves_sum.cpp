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

void printingtree(node* root, int& sum)
{
    // int sum =0;
        if(root==NULL)
        {
            return ;
        }
        if(root->left) // we want only left leaf and dont care about right leaf
        {
            if(root->left->left==NULL and root->left->right==NULL)// to check whether its a leaf node or not
            {
                sum+=root->left->t;
            } 
        }
        printingtree(root->left,sum);
        printingtree(root->right,sum);

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
    root->right->left = new node(313);

int sum=0;
printingtree(root,sum);
cout<<sum;
 
return 0;
}
 