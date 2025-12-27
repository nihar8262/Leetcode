class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n  = capacity.size();
        int sum = 0, count = 0;

        for(int it: apple){
            sum += it;
        }

        sort(capacity.begin(), capacity.end());

        for(int  i = n-1; i>=0; i--){
            if(sum <= 0) break;
            sum -= capacity[i];
            count++;
        }

        if(sum <= 0) return count;
        else return 0;
    }
};