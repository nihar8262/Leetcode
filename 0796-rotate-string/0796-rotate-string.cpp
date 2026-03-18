class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();

        for (int k = 0; k < n; k++) {
            string res = s.substr(k) + s.substr(0, k);
            if (res == goal) return true;
        }

        return false;

    }
};