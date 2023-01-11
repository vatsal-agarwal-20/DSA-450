#include <iostream>
using namespace std;

class DLLNode
    {
        public:
        int data;
        DLLNode *next;
        DLLNode *prev;
    };
int countPairs(DLLNode* first,DLLNode* last,int val)
{
    int count=0;
    while(first!=NULL && last!=NULL && first!=last && last->next!=first)
    {
        if(first->data + last->data == val)
        {
        count++;
        
        first=first->next;
        last=last->prev;
        }
        else if(first->data + last->data > val)
            last=last->prev;
        else
            first=first->next;
    }
    return count;
}
int countTriplets(DLLNode* head, int x)
{
    // WRITE YOUR CODE HERE
    if(head==NULL) return 0;
    
    DLLNode* first;
    DLLNode* curr;
    DLLNode* last=head;
    int count=0;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    
    for(curr=head;curr!=NULL;curr=curr->next)
    {
        first=curr->next;
        
        count += countPairs(first,last,x-curr->data);
    }
    return count;
}  
int main()
{

return 0;
}