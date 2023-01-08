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


class Solution{
    Node* reverseList(Node* head)
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
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL || head->next==NULL) return true;
        
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        Node* curr1=head;
        Node* curr2=reverseList(slow->next);
        
        while(curr2 !=NULL)
        {
            if(curr1->data != curr2->data) return false;
            
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return true;
        
    }
};
int main()
{

return 0;
}