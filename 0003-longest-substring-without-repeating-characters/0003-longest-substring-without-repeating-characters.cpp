class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int cnt = 0, maxi = 0;

        for(int i = 0; i < n; i++){
            cnt = 0;
            mp.clear();
            for(int j = i; j < n; j++){
                if(mp.find(s[j]) != mp.end()) break;
                else {
                    mp[s[j]]++;
                    cnt++;
                }
            }
            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};