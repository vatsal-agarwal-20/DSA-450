#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};


/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{

Node* temp=*head;
while(temp)
{
    if(temp->next->data == key)
    {
        temp->next=temp->next->next;
        break;
    }
    temp=temp->next;
}

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

// Your code goes here
struct Node* head=*head_ref;
struct Node* prev=head;
struct Node* curr=head->next;

while(curr!=head)
{
    struct Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
curr->next=prev;
*head_ref=prev;
return;
}
int main()
{

return 0;
}