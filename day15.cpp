#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
           return NULL;
        ListNode* p,* c,*n;
        p=NULL;
        c=n=head;
        while(n!=NULL)
        {
            n=n->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
};