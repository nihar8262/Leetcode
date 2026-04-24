class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int farthest = INT_MIN, length = 0;

        for(int i = 0; i<n; i++){
            if(moves[i] == 'L' || moves[i] == '_') length++;
            else length--;
        }
        farthest = max(farthest, length);
        length = 0;

        for(int i = 0; i<n; i++){
            if(moves[i] == 'R' || moves[i] == '_') length++;
            else length--;
        }
        farthest = max(farthest, length);

        return farthest;
    }
};