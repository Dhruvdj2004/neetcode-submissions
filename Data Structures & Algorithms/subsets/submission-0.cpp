class Solution {
public:
      void solve(vector<vector<int>>&ans,vector<int>&nums,int i, vector<int>&temp){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
          solve(ans,nums,i+1,temp);
          temp.push_back(nums[i]);
          solve(ans,nums,i+1,temp);
          temp.pop_back();
          return;

      }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        int i=0;
        solve(ans,nums,i,temp);
        return ans;
    }
};
