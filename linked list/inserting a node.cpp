#include<bits/stdc++.h>

using namespace std;
struct Node{
int data;
Node* next;
};

struct Node* head;

void insert(int x)
{
    struct Node*temp;
    temp = new Node();
    temp -> data = x;
    temp -> next = head;
    head=temp;

}
void print()
{

    struct Node* temp = head;
    cout<<"list are";
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp ->next;
    }
}
int main()
{int n,x;

    head = NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        insert(x);
        print();
    }
    return 0;
}
