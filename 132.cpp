#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head==NULL || head->next==NULL) return head;
 Node* prev=head;
 Node* curr=head->next;
 unordered_map<int,bool> visited;
 visited[prev->data]=true;
 
 while(curr!=NULL)
 {
     if(visited[curr->data]==true)
     {
         prev->next=curr->next;
         Node* toDelete=curr;
         curr=curr->next;
         delete(toDelete);
     }
     else 
     {
         visited[curr->data]=true;
         prev=curr;
         curr=curr->next;
         
     }
 }
 return head;
    }
};
int main()
{

return 0;
}