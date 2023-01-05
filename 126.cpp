#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
                                                    // ITERATIVE //

struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL) return head;

        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }

                                                    // RECURSIVE //

struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *newHead=reverseList(head->next);
        head->next->next=head;
        
        head->next=NULL;
        
        return newHead;
    }
int main()
{

return 0;
}