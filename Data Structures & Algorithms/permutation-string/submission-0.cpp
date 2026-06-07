class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int a=s1.length();
        sort(s1.begin(),s1.end());
        int l=0;
        int r=a-1;
        sort(s1.begin(),s1.end());
        while(r<s2.length()){
            string s=s2.substr(l,r-l+1);
            sort(s.begin(),s.end());
            if(s==s1){
                return true;
            }
        r++;
        l++;
        }


   return false;

    }
};
