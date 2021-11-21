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
    ListNode* temp=NULL;
    bool palin(ListNode* head)
    {
        if(head==NULL)
            return true;
        bool ans=palin(head->next);
        if(ans && temp->val==head->val)
        {
            temp=temp->next;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isPalindrome(ListNode* head) {
          temp=head;
          return palin(head);     
    }
};