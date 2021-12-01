 #include<bits/stdc++.h>
 using namespace std;
  struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
      TreeNode(int x) : val(x), left(NULL),right(NULL) {}
 };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
           vector<vector<int>> v;
         if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v1;
            for(int i=0;i<n;i++)
            {
             TreeNode * curr=q.front();
            q.pop();
             v1.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            v.push_back(v1);
        }
        return v;
    }
};