class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string res = "";

        for(int i = 0; i<n; i++){
            if(isalnum(s[i])) {
                res += tolower(s[i]);
            }
        }

        int m = res.size();

        int i = 0, j = m-1;

        while(i<=j){
            if(res[i] == res[j]) {
                i++;
                j--;
            }else return false;
        }

        return true;
    }
};