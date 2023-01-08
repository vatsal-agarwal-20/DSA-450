#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
};

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    if(head==NULL) return;
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast->next!=head && fast->next->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    // for even number of elements
    if(fast->next->next == head) 
        fast = fast->next; 
        
    
    *head1_ref=head;
    
    if(head->next !=head)
    *head2_ref=slow->next;
    
    
    fast->next=slow->next;
    slow->next=head;
    
}
int main()
{

return 0;
}