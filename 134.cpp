#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* reverseList(Node* &head)
    {
        if(head==NULL || head->next==NULL) return head;
        
        Node* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newHead;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* newHead=reverseList(head);
        
        Node* curr=newHead;
        curr->data +=1;
        int carry=0;
        
        if(newHead->data > 9)
        {
            while(curr->next!=NULL)
            {
                curr->data +=carry;
                carry=curr->data/10;
                curr->data %=10;
                curr=curr->next;
            }
            if(carry)
            {
                curr->data=curr->data+carry;
            }
        }
        head=reverseList(newHead);
        return head;
    }
int main()
{

return 0;
}