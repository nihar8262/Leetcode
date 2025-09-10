class Solution {
public:
    string longestNiceSubstring(string s) {
        unordered_set<char> missing;
        for (char c : s) {
            if (islower(c)) missing.insert(toupper(c));
            else missing.insert(tolower(c));
        }
        for (int i = 0; i < s.size(); i++) {
            if (missing.count(s[i])) {
                continue;
            }
            string s1 = longestNiceSubstring(s.substr(0, i));
            string s2 = longestNiceSubstring(s.substr(i + 1));
            return s1.size() >= s2.size() ? s1 : s2;
        }
        return s;
    }
};