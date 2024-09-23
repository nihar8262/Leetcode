class Solution {
private:
    unordered_map<string, int> um;

    int solve(string s) {
        if (s.empty()) {
            return 0;
        }

        int extra = INT_MAX;
        string tmp = "";

        for (int i = 0; i < s.size(); i++) {
            tmp += s[i];
            if (um.find(tmp) != um.end()) {
                extra = min(extra, solve(s.substr(i + 1)));
            }
        }

        extra = min(extra, 1 + solve(s.substr(1)));
        return extra;
    }

public:
    int minExtraChar(string s, vector<string>& dict) {
        for (auto& val : dict) {
            um[val]++;
        }
        return solve(s);
    }
};