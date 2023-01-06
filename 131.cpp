#include <iostream>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head==NULL || head->next==NULL) return head;
 Node* prev=head;
 Node* curr=head->next;
 
 while(curr!=NULL)
 {
     if(prev->data == curr->data)
     {
         prev->next=curr->next;
         Node* toDelete=curr;
         curr=curr->next;
         delete(toDelete);
     }
     else 
     {
         prev=curr;
         curr=curr->next;
     }
 }
 return head;
}
int main()
{

return 0;
}