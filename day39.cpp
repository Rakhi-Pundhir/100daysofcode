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
    int diameter(TreeNode* root,int* height)
    {
        if(root==NULL)
        {
            *height=0;
            return 0;
        }
        int lh=0,rh=0;
        int ld=diameter(root->left,&lh);
        int rd=diameter(root->right,&rh);
        *height=max(lh,rh)+1;
        return max(lh+rh,max(ld,rd));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int height=0;
        return diameter(root,&height);
        
    }
};