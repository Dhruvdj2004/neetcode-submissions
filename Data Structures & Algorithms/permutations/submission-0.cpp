class Solution {
public:

    void solve(vector<int>& nums,
               vector<vector<int>>& ans,
               vector<int>& temp,
               unordered_set<int>& st) {

        if(temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {

            if(st.find(nums[i]) == st.end()) {

                temp.push_back(nums[i]);
                st.insert(nums[i]);

                solve(nums, ans, temp, st);

                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        unordered_set<int> st;

        solve(nums, ans, temp, st);

        return ans;
    }
};