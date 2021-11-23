#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
Node* merge(Node* l1,Node* l2)
{
    Node* newnode=new Node(0);
    Node* temp=newnode;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            temp->bottom=l1;
            l1=l1->bottom;
        }
        else
        {
            temp->bottom=l2;
            l2=l2->bottom;
        }
        temp=temp->bottom;
    }
    if(l1!=NULL)
    {
        temp->bottom=l1;
    }
    else
    {
        temp->bottom=l2;
    }
    return newnode->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL)
   return root;
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}