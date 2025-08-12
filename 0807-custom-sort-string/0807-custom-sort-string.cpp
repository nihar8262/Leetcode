class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        int n = order.size();
        int m = s.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i] == s[j]){
                    ans = ans + order[i];
                    s[j] = '#';
                }
            }
        }
        int i=0;

        while(i<m){
            if(s[i]!='#') ans = ans + s[i];
            cout<<s[i];
            i++;
        }

        return ans;
    }
};