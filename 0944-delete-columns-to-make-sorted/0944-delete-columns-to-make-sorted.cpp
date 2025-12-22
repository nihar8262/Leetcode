class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int count = 0;

        for(int j = 0; j<m; j++){
            for(int i = 0; i<n-1; i++){
                char a = strs[i][j], b = strs[i+1][j];
                // int x = (int)a, y = (int)b;

                if(b < a) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};