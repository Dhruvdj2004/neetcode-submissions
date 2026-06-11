class Solution {
public:
    bool solve(int n, unordered_set<int>& seen) {
        if (n == 1) {
            return true;
        }

        if (seen.count(n)) {
            return false;
        }

        seen.insert(n);

        int sum = 0;
        string s = to_string(n);

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            sum += digit * digit;
        }

        return solve(sum, seen);
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        return solve(n, seen);
    }
};