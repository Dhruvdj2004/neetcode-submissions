class Solution {
public:
        vector<string>letter(string digits,vector<string> phone,int k,vector<string>&temp,string& s){
           
            if(k==digits.size()){
               temp.push_back(s);
               return temp;
            }
           
            char digit = digits[k];
           string letters = phone[digit - '0'];
            for(int i=0;i<letters.size();i++){
              s.push_back(letters[i]);
                  letter(digits,phone,k+1,temp,s);
                  s.pop_back();
            }
            return temp;
        }
    vector<string> letterCombinations(string digits) {
        vector<string> phone = {
    "",
    "",
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};
vector<string>temp;
int k=0;

string s="";
if(digits.length()==0){
    return temp;
}
      return letter(digits,phone,0,temp,s);
      
    }
};
