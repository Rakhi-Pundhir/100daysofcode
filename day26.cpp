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
    Node* segregate(Node *head) {
        int count[]={0,0,0};
        Node* temp=head;
        while(temp!=NULL)
        {
            count[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            if(count[i]==0)
            i++;
            else
            {
                temp->data=i;
                count[i]--;
                temp=temp->next;
            }
        }
        return head;
    }
};