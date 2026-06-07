class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxip=0;
        int minPrice=prices[0];
         for(int i=1;i<prices.size();i++){
        
                 maxip=max(maxip,prices[i]-minPrice);
                 minPrice = min(minPrice, prices[i]);
            

         }
         return maxip;
    }
};
