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
 void rightside(TreeNode* root,int level,vector<int>&output){
    if(root==NULL){
        return ;
    }
     if(output.size()<level){
        output.push_back(root->val);
     }
       rightside(root->right,level+1,output);
       rightside(root->left,level+1,output);


 }
  
    vector<int> rightSideView(TreeNode* root) {
        vector<int>output;
        int level=1;
        rightside(root,level,output);
        return output;

    }
};
