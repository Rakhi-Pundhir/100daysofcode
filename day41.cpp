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
    TreeNode* insu(TreeNode* root)
    {
        TreeNode* curr=root;
        while(curr->left!=NULL)
            curr=curr->left;
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return NULL;
        if(key<root->val)
            root->left=deleteNode(root->left,key);
        else if(key>root->val)
            root->right=deleteNode(root->right,key);
        else
        {
           if(root->left==NULL && root->right==NULL)
               return NULL;
            else if(root->left==NULL)
            {
               TreeNode* temp=root->right;
                delete root;
                return temp;
            }
             else if(root->right==NULL)
            {
               TreeNode* temp=root->left;
                delete root;
                return temp;
            }
                TreeNode* temp=insu(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            
        }
        return root;
    }
};