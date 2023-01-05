#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int findFirstNode(Node* head)
    {
        // your code here
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
                    curr=curr->next;
                    slow=slow->next;
                }
                return curr->data;
            }
        }
        return -1;
    }
int main()
{

return 0;
}