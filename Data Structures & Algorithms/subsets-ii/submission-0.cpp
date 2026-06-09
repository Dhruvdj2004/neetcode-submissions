

class Solution {
public:
      void solve(vector<vector<int>>&ans,vector<int>&nums,int ind, vector<int>&temp){
       ans.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(ind!=i&&nums[i]==nums[i-1]){
                continue;
            }
          temp.push_back(nums[i]);
          solve(ans,nums,i+1,temp);
          temp.pop_back();
        }
          
          return;

      }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums)     
     {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        int i=0;
        solve(ans,nums,i,temp);
        return ans;
    }
};
