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

bool detectLoop(Node* head)
    {
        // your code here
        Node* slow=head;
        Node* fast=head->next;
        
        while(slow!=NULL)
        {
            if(fast==NULL || fast->next==NULL) return false;
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast) return true;
        }
        return false;
    }
int main()
{

return 0;
}