class Solution {
public:
    bool isVowel(char ch) {
        return string("AEIOUaeiou").find(ch) != string::npos;
    }

    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        vector<int> freq(10, 0);

        
        for(char c : s) {
            int idx = vowels.find(c);
            if(idx != string::npos) freq[idx]++;
        }

        
        int vIndex = 0; 
        for(int i = 0; i < s.size(); i++) {
            if(isVowel(s[i])) {
                while(freq[vIndex] == 0) vIndex++;
                s[i] = vowels[vIndex];
                freq[vIndex]--;
            }
        }

        return s;
    }
};
