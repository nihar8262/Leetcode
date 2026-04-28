class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = words.size();

        for(int i = 0; i<n; i++){
            if(words[i] == target){
                int distance = abs(startIndex - i);
                ans = min(ans, min(distance, n - distance));
            }
        }

        return ans < n ? ans : -1;
    }
};