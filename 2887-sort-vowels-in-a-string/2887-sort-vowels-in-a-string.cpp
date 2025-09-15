class Solution {
public:
    bool isVowel(char ch) {
        if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ||
            (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            return true;
        else
            return false;
    }
    string sortVowels(string s) {
        int n = s.size(), k = 0;
        string vowel = "";

        for(int i = 0; i<n; i++){
            if(isVowel(s[i])) vowel += s[i];
        }

        sort(vowel.begin(),vowel.end());
        cout<<vowel<<endl;

        for(int i = 0; i<n; i++){
            if(isVowel(s[i])) {
                s[i] = vowel[k];
                k++;
            }
        }

        // for (int i = 0; i < n - 1; i++) {
        //     if (isVowel(s[i])) {
        //         char ch = s[i];
        //         for (int j = i + 1; j < n; j++) {
        //             if (isVowel(s[j])){
        //                 char x = s[j];
        //                 int p = (int)ch;
        //                 int q = (int) x;
        //                 if(p>q) {
        //                     swap(s[i],s[j]);
        //                     ch = s[i];
        //                 }
                        
        //             }
        //         }
        //     }
        // }

        return s;
    }
};