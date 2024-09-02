class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=chalk[i];
        }

        int to=k%sum;

        for(int i=0;i<n;i++){
            if(to<chalk[i]) {
                return i;
            }
            else to-=chalk[i];
        }
        return 0;
    }
};
static const int kds = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();