 #include<bits/stdc++.h>
 using namespace std;
  struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* merge(ListNode* head,ListNode* tail)
    {
        if(head==NULL)
            return tail;
        else if(tail==NULL)
            return head;
        ListNode* ans=NULL;
        if(head->val <= tail->val)
        {
            ans=head;
            ans->next=merge(head->next,tail);
        }
        else
        {
            ans=tail;
            ans->next=merge(head,tail->next);
        }
        return ans;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* tail=slow->next;
        slow->next=NULL;
        ListNode* ans_node=merge(sortList(head),sortList(tail));
        return ans_node;
    }
};