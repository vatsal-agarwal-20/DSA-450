#include <iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int v)
    {
        val=v;
        next=NULL;
    }
};
ListNode *moveToFront(ListNode *head){
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr->next=head;
        return curr;
    }
int main()
{

return 0;
}