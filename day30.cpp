 #include<bits/stdc++.h>
 using namespace std;
  struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n;
        int count=0;
        while(c!=NULL && count<k)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        if(n!=NULL)
        {
            head->next=reverseKGroup(n,k);
        }
        return p;
    }
};