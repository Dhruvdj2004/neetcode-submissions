class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,double>> time;

        for(int i = 0; i < position.size(); i++) {
            double t = (double)(target - position[i]) / speed[i];
            time.push_back({position[i], t});
        }

        sort(time.begin(), time.end());

        if(time.size() == 0) return 0;

        int count = 1;

        for(int i = time.size() - 2; i >= 0; i--) {

            if(time[i].second <= time[i + 1].second) {
                time[i].second = time[i + 1].second;
            }
            else {
                count++;
            }
        }

        return count;
    }
};