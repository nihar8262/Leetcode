class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size();
        int m = trainers.size();
        int cnt = 0,j = 0,i=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        while(i<n && j<m){
                if(players[i]<=trainers[j] ) {
                cnt++;
            j++;
            i++;
            }else j++;
        }

        return cnt;
    }
};