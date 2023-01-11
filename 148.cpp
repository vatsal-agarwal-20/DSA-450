#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
        {
        public:
            int data;
            Node *next;
            Node *prev;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
                this->prev = NULL;
            }
        };

struct cmp{
  bool operator()(Node* first, Node* second)
  {
      return first->data > second->data;
  }
};
Node *sortedDll(Node *head, int k)
{
    // Write your code here
    if(head==NULL) return head;
    priority_queue<Node*, vector<Node*>, cmp> pq;
    
    Node* newHead=NULL;
    Node* curr;
    for(int i=0;head!=NULL && i<=k;i++)
    {
        pq.push(head);
        head=head->next;
    }
    
    while(!pq.empty())
    {
        if(newHead==NULL)
        {
            newHead= pq.top();
            newHead->prev=NULL;
            curr=newHead;
        }
        else
        {
            curr->next=pq.top();
            pq.top()->prev=curr;
            curr=pq.top();
        }
        
        pq.pop();
        
        if(head!=NULL)
        {
            pq.push(head);
            head=head->next;
        }
    }
    curr->next=NULL;
    
    return newHead;
    
}
int main()
{

return 0;
}