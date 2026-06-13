class Solution {
public:
    int maxArea(vector<int>& heights) {
       
        int l=0;
        int r=heights.size()-1;
        int maxi=INT_MIN;
        while(l<r){
           int a= min(heights[l],heights[r]);
           int b=r-l;
           int area=a*b;
           maxi=max(area,maxi);
           if(heights[l]>heights[r]){
            r--;
           }
           else{
            l++;
           }
          
        }
        return maxi;
    }
};
