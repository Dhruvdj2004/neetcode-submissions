class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxijump=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxijump){
                return false;
            }
           maxijump=max(maxijump,i+nums[i]);
        }
       
           
        
        return true;
    }
};
