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
bool isCircular(Node *head)
{
   // Your code here
   if(!head)
   return true;
   Node* temp=head;
   while(temp!=NULL)
   {
       temp=temp->next;
       if(temp==head)
       return true;
   }
   return false;
}