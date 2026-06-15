/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
       int good(TreeNode* root,int count,int rootserver){
        if(root==NULL){
            return 0;
        } count=0;
          if(rootserver<=root->val){
            rootserver=root->val;
            count=1;
          }
        int a=good(root->left,count,rootserver);
        int b=good(root->right,count,rootserver);
        return a+b+count;

       }
    int goodNodes(TreeNode* root) {
        int count=0;
        int rootserver=INT_MIN;
        return good(root,count,rootserver);
        
    }
};
