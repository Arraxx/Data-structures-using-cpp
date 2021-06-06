#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define null NULL
 
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data = d;
        left=null;
        right=null;
    }
};
void leftview(node* root, int value, int *maxval)
{
    if(root==null)
    {
        return;
    }
    if(*maxval<value)
    {
    cout<<root->data;
    *maxval = value;
    }
    leftview(root->left, value+1, maxval);
    leftview(root->right, value+1,maxval);

}
void rightview(node* root, int val, int *level)
{
    if(root==null)
    {
        return;
    }
    if(*level<val)
    {
    cout<<root->data;
    *level = val;
    }
    rightview(root->right, val+1, level);
    rightview(root->left, val+1,level);

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->right->left = new node(6);
//1 2 4
int maxval =-1;
leftview(root,0,&maxval);
cout<<endl;
//1 3 6
int level =-1;
rightview(root,0,&level);
return 0;
}