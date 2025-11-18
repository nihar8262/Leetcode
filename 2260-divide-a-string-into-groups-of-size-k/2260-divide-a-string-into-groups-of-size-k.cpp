class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string add = "";
        int n = s.size(), size = k;

        for (int i = 0; i < n; i++) {
            add += s[i];
            size--;

            if (size == 0) {
                size = k;
                ans.push_back(add);
                add = "";
            }
        }

        if (size < k) {
            while (size != 0) {
                add += fill;
                size--;
            }
            ans.push_back(add);
        }

        return ans;
    }
};