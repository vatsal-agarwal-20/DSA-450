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


/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node* curr=head;
   while(curr->next!=head && curr->next!=NULL)
   {
       curr=curr->next;
   }
   if(curr->next==head) return true;
   else return false;
}
int main()
{

return 0;
}