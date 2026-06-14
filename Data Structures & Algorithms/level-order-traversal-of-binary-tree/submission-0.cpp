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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
           
       if(root==NULL){
        return ans;
       }
       q.push(root);
        while(!q.empty()){
          vector<int>temp;
           int n=q.size();
           while(n--){
            TreeNode* a=q.front();
            temp.push_back(a->val);
            q.pop();
            if(a->left){
                q.push(a->left);
            }
             if(a->right){
                q.push(a->right);
            }


           }
           ans.push_back(temp);}


           

            
                 
   return ans;
    }
};
