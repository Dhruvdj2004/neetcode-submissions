class Solution {
public:
  void solve(vector<vector<int>>&ans,vector<int>&nums,int i, vector<int>&temp,int target){
         if(target<0){
            return;
         }
         if(target==0){
        ans.push_back(temp);
        return;
         }
        if(i==nums.size()){
            return;
        }
          solve(ans,nums,i+1,temp,target);
          temp.push_back(nums[i]);
          solve(ans,nums,i,temp,target-nums[i]);
          temp.pop_back();
          return;

      }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) { 
    
        vector<vector<int>> ans;
        vector<int>temp;
        int i=0;
        solve(ans,nums,i,temp,target);
        return ans;
    }
};


