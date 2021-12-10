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
    TreeNode* insert(TreeNode* root,int key)
    {
        if(root==NULL)
        {
            TreeNode* node=new TreeNode(key);
            return node;
        }
        if(key<root->val)
            root->left=insert(root->left,key);
        else
            root->right=insert(root->right,key);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        root=insert(root,preorder[0]);
        for(int i=1;i<preorder.size();i++)
        {
            insert(root,preorder[i]);
        }
        return root;
    }
};