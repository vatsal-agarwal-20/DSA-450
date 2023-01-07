#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 

//you have to complete this function
void insertAtTail(node* &head,node* &tail,int val)
{
    node* temp=new node(val);
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
node* quickSort(node* head)
{
    if(head==NULL || head->next==NULL) return head;
    
    node* pivot=new node(head->data);
    
    node* leftHead=NULL;
    node* leftTail=NULL;
    node* rightHead=NULL;
    node* rightTail=NULL;
    
    node* walk=head->next;
    while(walk!=NULL)
    {
        if(walk->data < pivot->data)
        {
            insertAtTail(leftHead,leftTail,walk->data);
        }
        else
        {
            insertAtTail(rightHead,rightTail,walk->data);
        }
        walk=walk->next;
    }
    
    leftHead=quickSort(leftHead);
    rightHead=quickSort(rightHead);
    
    walk=leftHead;
    if(walk!=NULL)
    {
        while(walk->next!=NULL)
        {
            walk=walk->next;
        }
    }
    
    if(walk==NULL)
    {
        pivot->next = rightHead;
        return pivot;
    }
    
    walk->next=pivot;
    pivot->next=rightHead;
    
    return leftHead;
}
void quickSort(struct node **headRef) {
    *headRef=quickSort(*headRef);
}
int main()
{

return 0;
}