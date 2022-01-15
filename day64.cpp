#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node* temp=head;
        int k=0;
        while(temp!=NULL && temp->next!=NULL)
        {
            k++;
            if(k==M)
            {
                Node* t=temp;
                while(N--)
                {
                    if(t!=NULL && t->next!=NULL)
                    t=t->next;
                }
                temp->next=t->next;
                k=0;
            }
            temp=temp->next;
        }
    }
};