class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp = {{'I',1}, {'V',5}, {'X', 10}, {'L',50}, {'C', 100}, {'D',500}, {'M',1000}};
        int n = s.size();
        int ans = 0;

        for(int i = 0; i<n; i++){
            if( i<n-1 && ((s[i] == 'I' && s[i+1] == 'V') || (s[i] == 'I' && s[i+1] == 'X') 
            || (s[i] == 'X' && s[i+1] == 'L') || (s[i] == 'X' && s[i+1] == 'C')
            || (s[i] == 'C' && s[i+1] == 'D') || (s[i] == 'C' && s[i+1] == 'M'))) {
                ans += mp[s[i+1]] - mp[s[i]];
                i++;
            }else ans += mp[s[i]];
        }

        return ans;
    }
};