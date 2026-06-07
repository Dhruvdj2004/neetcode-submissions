class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int maxi=0;
        while(r<s.length()){
            if(mp.find(s[r])!=mp.end()){
                l=max(l,mp[s[r]]+1);
              
            }
            
                mp[s[r]]=r;
            
             
            maxi=max(maxi,r-l+1);
r++;

        }
        return maxi;
    }
};
