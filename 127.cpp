#include <iostream>
using namespace std;

struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    };

struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* curr=head;
        node* prev=NULL;
        node* next=NULL;
        int c=0;
        
        while(curr!=NULL && c < k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }
        
        if(next!=NULL)
        {
            head->next=reverse(next,k);
        }
        return prev;
    }
int main()
{

return 0;
}