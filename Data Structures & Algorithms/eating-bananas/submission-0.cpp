class Solution {
public:
    int time(int mid,vector<int>& piles){
        int count=0;
        int a=0;
        for(int i=0;i<piles.size();i++){
            a=a+piles[i]/mid;
            int b=piles[i]%mid;
            if(b!=0){
                a=a+1;
            }

        }
        return a;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r= *max_element(piles.begin(), piles.end());
        int mini=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            int a=time(mid,piles);
            if(a>h){
                l=mid+1;
            }
            else{
                r=mid-1;
                mini=min(mini,mid);
            }
        }

            return mini;
    }
};
