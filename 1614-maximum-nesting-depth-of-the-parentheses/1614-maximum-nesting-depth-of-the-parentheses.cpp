class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0, maxi = INT_MIN;
        stack<char> st;

        for(char ch: s){
            if(ch == '(') {
                st.push('(');
                cnt++;
            }
            else if(ch == ')'){
                if(st.top() == '('){
                    cnt--;
                    st.pop();
                }
            }

            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};