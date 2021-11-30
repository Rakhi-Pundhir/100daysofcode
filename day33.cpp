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
    bool compare(TreeNode* root,int* height)
    {
        if(root==NULL)
            return true;
        int lh=0,rh=0;
        if(!compare(root->left,&lh))
            return false;
         if(!compare(root->right,&rh))
            return false;
        *height=max(lh,rh)+1;
        if(abs(lh-rh)<=1)
            return true;
        else
        return false;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int height=0;
       return compare(root,&height); 
    }
};