class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int m = s.size();
        long long MOD = 1e9 + 7;
        
        // 1. Precompute powers of 10 modulo MOD
        vector<long long> power10(m + 1, 1);
        for (int i = 1; i <= m; i++) {
            power10[i] = (power10[i - 1] * 10) % MOD;
        }
        
        // 2. Single loop preprocessing for prefix arrays
        vector<long long> pref_x(m + 1, 0);
        vector<long long> pref_sum(m + 1, 0);
        vector<int> cnt(m + 1, 0);
        
        for (int i = 0; i < m; i++) {
            int c = s[i] - '0';
            if (c != 0) {
                pref_x[i + 1] = (pref_x[i] * 10 + c) % MOD;
                pref_sum[i + 1] = pref_sum[i] + c;
                cnt[i + 1] = cnt[i] + 1;
            } else {
                pref_x[i + 1] = pref_x[i];
                pref_sum[i + 1] = pref_sum[i];
                cnt[i + 1] = cnt[i];
            }
        }
        
        // 3. Answer each query in O(1) time
        vector<int> ans;
        for (const auto& q : queries) {
            int start = q[0];
            int end = q[1];
            
            // Number of non-zero digits in the range
            int K = cnt[end + 1] - cnt[start];
            
            // Extract the concatenated value 'x' for the range
            long long x = (pref_x[end + 1] - (pref_x[start] * power10[K]) % MOD + MOD) % MOD;
            
            // Extract the sum of digits for the range
            long long sum = pref_sum[end + 1] - pref_sum[start];
            
            long long result = (x * sum) % MOD;
            ans.push_back(result);
        }
        
        return ans;
    }
};