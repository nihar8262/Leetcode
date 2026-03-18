class Solution {
public:
    bool rotateString(string s, string goal) {
        string res = "";
        int n = s.size() - 1;
        int k = n;

        if(s.size() != goal.size()) return false;

        while(k>=0){
            res += s.substr(k,n);
            res += s.substr(0, k);
            k--;

            cout<<res<<" ";

            if(res == goal || s == goal) return true;
            else res = "";
        }

        return false;
    }
};