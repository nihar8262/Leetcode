# Brute Force and Optimal(PrefixSum + Hashmap) Solution || Easy and Simple Approach||Beginner Friendly

# Brute Force

# Intuition
The problem asks us to count the number of continuous subarrays whose sum equals k.
A straightforward way to solve this is to consider every possible subarray and compute its sum. If the sum of a subarray equals k, we increment our count.

To generate all subarrays, we fix a starting index i and extend the subarray to every possible ending index j.

# Approach
1. Initialize a variable count to store the number of valid subarrays.
2. Iterate through the array using index i as the starting point of the subarray.
3. For each i, maintain a variable sum initialized to 0.
4. Extend the subarray by iterating j from i to n-1:
   - Add nums[j] to sum.
   - If sum == k, increment count.
5. Continue this process for all possible starting indices.
6. Return count after checking all subarrays.

This approach ensures that every possible subarray is evaluated.

# Complexity
- Time complexity: O(n²)
There are two nested loops:
  - The outer loop chooses the starting index.
  - The inner loop extends the subarray.
Thus, the total number of operations is proportional to n².

- Space complexity: O(1)
  We only use a few extra variables (sum, count) and do not require additional data structures.
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += nums[j];
                if(sum == k) {
                    count++;
                }  
            }
        }

        return count;
    }
};
```

# Optimal Solution (Prefix Sum + Hashmap Approach)
# Intuition
The brute force approach checks all possible subarrays and calculates their sum, which takes O(n²) time. We can optimize this using the concept of Prefix Sum.

Let prefixSum[i] represent the sum of elements from index 0 to i.

If a subarray from index (j+1 → i) has sum k, then:

    prefixSum[i] - prefixSum[j] = k
Rearranging:

    prefixSum[j] = prefixSum[i] - k

So while traversing the array, if we have previously seen a prefix sum equal to prefixSum - k, it means there exists a subarray ending at the current index whose sum is k. We store the frequency of prefix sums using a HashMap to quickly check this.

# Approach
1. Use a hash map mp to store the frequency of prefix sums encountered so far.
2. Initialize mp[0] = 1 to handle cases where the subarray starting from index 0 has sum k.
3. Maintain a variable prefixSum to keep track of the cumulative sum while iterating through the array.
4. For each element:
   - Update the cumulative sum:

            prefixSum += nums[i]
   - Compute remove = prefixSum - k.
   - If remove exists in the map, it means there are subarrays ending at the current index with sum k, so add its frequency to count.
   - Store/update the current prefixSum in the map.
5. After processing the entire array, return count.

# Complexity
- Time complexity: O(n)
  We traverse the array once, and all hash map operations (insert and lookup) take O(1) on average.

- Space complexity: O(n)
In the worst case, we may store up to n different prefix sums in the hash map.

# Code
```cpp []
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0, prefixSum = 0;

        for(int i = 0; i<n; i++){
            prefixSum += nums[i];
            int remove = prefixSum - k;
            count += mp[remove];
            mp[prefixSum] += 1;
        }

        return count;
    }
};
```