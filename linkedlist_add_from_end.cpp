#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
struct node* jj;
void insert(int x){
    struct node* temp = new node();
    temp->data = x;
    temp->next=NULL;
    jj = head;
while(jj->next!=NULL){
    jj=jj->next;
}
jj->next = temp;
}
void print(){
    struct node* temp = NULL;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}
int main(){    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }
return 0;

}