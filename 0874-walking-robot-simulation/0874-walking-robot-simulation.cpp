class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long long> st;

        for (auto &obs : obstacles) {
            long long key = ((long long)obs[0] << 32) ^ (unsigned int)obs[1];
            st.insert(key);
        }

        int x = 0, y = 0;
        int dir = 0; // 0=N, 1=E, 2=S, 3=W
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        int ans = 0;

        for (int cmd : commands) {
            if (cmd == -1) {
                dir = (dir + 1) % 4; // turn right
            } else if (cmd == -2) {
                dir = (dir + 3) % 4; // turn left
            } else {
                for (int step = 0; step < cmd; step++) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];

                    long long key = ((long long)nx << 32) ^ (unsigned int)ny;
                    if (st.count(key)) break;

                    x = nx;
                    y = ny;
                    ans = max(ans, x * x + y * y);
                }
            }
        }

        return ans;
    }
};