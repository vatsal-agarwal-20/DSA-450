#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,Node* &tail, int val)
{
    Node* temp=new Node(val);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    
    Node* curr1=head1;
    Node* curr2=head2;
    
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->data == curr2->data)
        {
            insertAtTail(ansHead,ansTail,curr1->data);
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else if(curr1->data < curr2->data)
        {
            curr1=curr1->next;
        }
        else
        {
            curr2=curr2->next;
        }
    }
    return ansHead;
}
int main()
{

return 0;
}