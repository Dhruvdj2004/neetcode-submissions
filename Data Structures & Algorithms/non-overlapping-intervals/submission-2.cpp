class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        if(intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 1;  // keep first interval
        int endtime = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++) {

            if(intervals[i][0] >= endtime) {
                count++;
                endtime = intervals[i][1];
            }
        }

        return intervals.size() - count;
    }
};