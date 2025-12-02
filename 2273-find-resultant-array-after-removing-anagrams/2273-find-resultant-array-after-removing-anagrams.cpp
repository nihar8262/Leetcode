class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        string prev = "";

        for (string w : words) {
            string sorted = w;
            sort(sorted.begin(), sorted.end());

            if (sorted != prev) {
                result.push_back(w);
                prev = sorted;
            }
        }

        return result;
    }
};
