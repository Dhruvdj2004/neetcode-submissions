class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
       
        string ans;
         
       
   
for(char ch : s) {
            if(isalnum(ch)) {
                ans += tolower(ch);
            }
        }
int r=ans.length()-1;
        
        while(l<=r){
            if(ans[l]!=ans[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
