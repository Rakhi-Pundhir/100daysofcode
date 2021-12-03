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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*> st;
        queue<TreeNode*> q;
        q.push(root);        
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* cur=q.front();
            q.pop();
            st.push(cur); 
            if(cur->right)
                q.push(cur->right);
            if(cur->left)
                q.push(cur->left);
            }
            st.push(NULL);
        }
            st.pop();
            vector<int> v;
            while(!st.empty())
            {
                if(st.top()!=NULL)
                {
                    v.push_back(st.top()->val);
                    st.pop();
                }
                else
                {
                    st.pop();
                    ans.push_back(v);
                    v.clear();
                }
            }
        ans.push_back(v);
        
        return ans;
    }
};