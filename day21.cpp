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
int getNthFromLast(struct Node *head, int n)
{
    int count=0;
    struct Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int diff=count-n;
    if(diff<0)
    {
        return -1;
    }
    int pos=0;
    temp=head;
    while(temp!=NULL && pos<diff)
    {
        pos++;
        temp=temp->next;
    }
    return temp->data;
}