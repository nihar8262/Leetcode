class Solution {
public:

    bool isVowel(char ch) {
        return string("aeiou").find(ch) != string::npos;
    }

    int maxFreqSum(string s) {
        int maxiV = 0, maxiC = 0;
        unordered_map<char,int> mp;

        for(char ch: s){
            mp[ch]++;
        }

        int n = mp.size();

        for(auto it:mp){
            if(isVowel(it.first)){
                if(it.second>maxiV) maxiV = it.second;
            }else {
                if(it.second>maxiC) maxiC = it.second;
            }
        }

        return maxiC + maxiV ;
    }
};