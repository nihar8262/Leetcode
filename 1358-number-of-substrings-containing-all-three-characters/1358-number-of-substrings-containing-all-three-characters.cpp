class Solution {
public:
    int numberOfSubstrings(string s) {

        int n = s.length();

        int ans = 0, left = 0, right = 0;

        int arr[3] = {0, 0, 0};

        while (right < n) {

            arr[s[right] - 'a']++;

            while (arr[0] != 0 && arr[1] != 0 && arr[2] != 0) {

                ans += n - right;

                arr[s[left] - 'a']--;

                left++;
            }

            right++;
        }

        return ans;
    }
};