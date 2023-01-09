#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node* reverseDLL(Node * head)
{
    //Your code here
    if(head==NULL || head->next==NULL) return head;
    
    Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    head=curr;
    curr->next=curr->prev;
    curr->prev=NULL;
    curr=curr->next;
    
    while(curr->prev!=NULL)
    {
        Node* temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        curr=curr->next;
    }
    curr->prev=curr->next;
    curr->next=NULL;
    
    return head;
}
int main()
{

return 0;
}