#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head)
    {
        if(head==NULL) return;
        // code here
        // just remove the loop without losing any nodes
        Node* slow=head;
        Node* fast=head;
        
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                Node* curr=head;
                
                while(curr!=slow)
                {
                    slow=slow->next;
                    curr=curr->next;
                }
                Node* temp=curr;
                while(temp->next!=curr)
                {
                    temp=temp->next;
                }
                temp->next=NULL;
            }
        }
    }
int main()
{

return 0;
}