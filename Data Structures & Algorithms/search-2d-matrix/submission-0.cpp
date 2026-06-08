class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n=matrix[i].size();
        int m=matrix.size();
        int j=n-1;
          while(i<m&&j<n&&j>=0&&i>=0){
            int a=matrix[i][j];
            if(a<target){
                i++;
            }
             else if(a>target){
                j--;
            }
            else{
                return true;
            }
          }
          return false;
    }
};
