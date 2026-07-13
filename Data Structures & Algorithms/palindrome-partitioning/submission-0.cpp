class Solution {
public:
      bool ispalin(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
      }
    vector<vector<string>>palin(string s,vector<vector<string>>&ans, vector<string>&temp,int k){
        if(k==s.length()){
            ans.push_back(temp);
            return ans;
        }
        for(int i=k;i<s.length();i++){
            if(ispalin(s.substr(k,i-k+1))){
                temp.push_back(s.substr(k,i-k+1));
                palin(s,ans,temp,i+1);
            temp.pop_back();
            }
            

        }
        return ans;
     }
    vector<vector<string>> partition(string s) {
         vector<vector<string>>ans;
          vector<string>temp;
          int i=0;
         return palin(s,ans,temp,0);
    }
};
