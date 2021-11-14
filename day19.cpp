#include<bits/stdc++.h>
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
    Node * removeDuplicates( Node *head) 
    {
     if(head==NULL || head->next==NULL)
     return head;
     unordered_set<int> s;
     Node* temp=head;
     Node* prev=NULL;
     while(temp)
     {
         if(s.find(temp->data)!=s.end())
         {
             prev->next=temp->next;
             
         }
         else
         {
             s.insert(temp->data);
             prev=temp;
         }
         temp=prev->next;
     }
     return head;
     
    }
};