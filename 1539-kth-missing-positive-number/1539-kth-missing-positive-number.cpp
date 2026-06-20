class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int num : arr) {
            // If the current element is less than or equal to k,
            // it means a number we thought was missing is actually in the array.
            // So, we need to shift our target window up by 1.
            if (num <= k) {
                k++;
            } else {
                // Since the array is sorted, all subsequent numbers will be greater than k.
                // We can stop early.
                break;
            }
        }
        return k;
    }
};