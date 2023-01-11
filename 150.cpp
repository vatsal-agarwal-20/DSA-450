#include <iostream>
using namespace std;

class Node
	{
	public:
	    int data;
	    Node *next;
	    Node *prev;
	    Node(int data)
	    {
	        this->data = data;
	        this->next = NULL;
	        this->prev = NULL;
	    }
	};

Node* reverseDLLInGroups(Node* head, int k)
{	
    // Write your code here. 
    Node* next;
    Node* prev=NULL;
    int c=0;
    Node* curr=head;
    
    while(curr!=NULL && c<k)
    {
        c++;
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    if(next!=NULL)
    {
        head->next=reverseDLLInGroups(next,k);
    }
    return prev;
}
int main()
{

return 0;
}