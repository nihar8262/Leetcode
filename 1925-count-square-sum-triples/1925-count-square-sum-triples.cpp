class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for(int i=1; i<=n-1; i++){
            for(int j = i+1; j<=n-1; j++){
                for(int k = i+2; k<=n; k++){
                    int sum = i*i + j*j;
                    if(sum == (k*k)) count += 2;
                }
            }
        }
        return count;
    }
};