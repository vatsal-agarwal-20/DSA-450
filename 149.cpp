#include <iostream>
using namespace std;

class DLLNode {
    public:
	int data;
	DLLNode *next;
    DLLNode* prev;

	DLLNode(int data) {
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};

DLLNode* rotateDLL(DLLNode* head, int k) 
{
    // Write your code here.
    if(k==0) return head;
    DLLNode* curr=head;
    int count=1;
    while(count<k && curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    DLLNode* kthNode=curr;
    
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=head;
    head->prev=curr;
    
    head=kthNode->next;
    head->prev=NULL;
    
    kthNode->next=NULL;
    
    return head;
    
}
int main()
{

return 0;
}