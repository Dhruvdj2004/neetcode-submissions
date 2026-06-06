class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int maxi=0;
        if(nums.size()==0){
            return 0;
        }
       
        for(int i=0;i<nums.size();i++){
           st.insert(nums[i]);
        }
         int i=0;
         while(i<nums.size()){
           if(st.find(nums[i]-1)!=st.end()){
               int count=1;
            int x=nums[i];
            while(st.find(x+1)!=st.end()){
               x=x+1;
               count++;
           }
            maxi=max(count,maxi);
           }
            i++;}
          
        
        return maxi+1;
    }
};
