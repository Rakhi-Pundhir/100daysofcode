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
    TreeNode* searchBST(TreeNode* root, int key) {
        if(root==NULL)
           return NULL;
        if(key<root->val)
        {
          return searchBST(root->left,key);
        }
         if(key>root->val)
        {
          return searchBST(root->right,key);
        }
        return root;
    }
};