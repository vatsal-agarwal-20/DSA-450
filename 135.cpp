#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    Node* reverseList(Node* &head)
    {
        if(head==NULL || head->next==NULL) return head;
        
        Node* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return newHead;
    }
    
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val)
    {
        struct Node* temp=new Node(val);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second)
    {
        int carry=0;
        struct Node* ansHead=NULL;
        struct Node* ansTail=NULL;
        
        while(first!=NULL && second!=NULL)
        {
            int sum=carry+first->data+second->data;
            int digit=sum%10;
            
            struct Node* temp=new Node(digit);
            
            insertAtTail(ansHead,ansTail,digit);
            
            carry= sum/10;
            
            first=first->next;
            second=second->next;
            
        }
        
        while(first!=NULL)
        {
            int sum=carry+first->data;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            
            carry= sum/10;
            
            first=first->next;
        }
        
        while(second!=NULL)
        {
            int sum=carry+second->data;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            
            carry= sum/10;
            
            second=second->next;
        }
        while(carry!=0)
        {
            int sum=carry;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            
            carry= sum/10;
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        
        first=reverseList(first);
        second=reverseList(second);
        
        struct Node* ans=add(first,second);
        
        ans=reverseList(ans);
        return ans;
        
    }
};
int main()
{

return 0;
}