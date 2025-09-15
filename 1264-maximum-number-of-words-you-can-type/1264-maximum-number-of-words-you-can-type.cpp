class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt = 0, k = 0;
        int n = text.size();
        int m = brokenLetters.size();
        bool flag = true;
        string word = "";
        vector<string> words;

        for(int i = 0; i < n; i++){
            if(text[i] == ' ' || i == n-1){
                if(i == n-1) word += text[i];
                words.push_back(word);
                word = "";
            }
            word += text[i];
        }

        for(int i = 0; i< words.size(); i++){
            flag = true;
            // cout<< words[i] << endl;
            for(int j = 0; j<words[i].size(); j++){
                k = 0;
                while(k < m){
                    if(words[i][j] == brokenLetters[k]) {
                    // cout<<"Words " << words[i][j] << "at i "<< i << " brokenLetters " << brokenLetters[k] << endl;
                        flag = false; 
                        break;
                    }
                    k++;
                }
                if(flag == false) break;
            }
            if(flag == true) cnt++;
        }

        return cnt;

        
    }
};