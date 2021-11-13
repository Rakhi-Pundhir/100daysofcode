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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode*t=head;
        ListNode*n=t->next;
        while(n!=NULL && t!=NULL)
        {
            if(t->val==n->val)
            {
                t->next=n->next;
                n=t->next;
            }
            else
            {
              t=t->next;
              n=t->next;
            }
        }
        return head;
    }
};