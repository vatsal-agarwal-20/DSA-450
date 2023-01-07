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

int countNodes(Node* head)
{
    int count=0;
    if(head==NULL) return 0;
    
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
int getIntersectionPoint(Node* head1,Node* head2, int diff)
{
    Node* curr1=head1;
    Node* curr2=head2;
    while(diff>0)
    {
        if(curr1==NULL) return -1;
        curr1=curr1->next;
        diff--;
    }
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1 == curr2)
        {
            return curr1->data;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int l1=countNodes(head1);
    int l2=countNodes(head2);
    int diff;
    if(l1 > l2)
    {
        diff=l1-l2;
        return getIntersectionPoint(head1,head2,diff);
    }
    else 
    {
        diff=l2-l1;
        return getIntersectionPoint(head2,head1,diff);
    }
}
int main()
{

return 0;
}