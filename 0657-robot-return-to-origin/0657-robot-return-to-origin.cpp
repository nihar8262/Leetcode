class Solution {
public:
    bool judgeCircle(string moves) {
        int Right = 0, Left = 0, Up = 0, Down = 0;

        for(char ch: moves){
            if(ch == 'U') Up++;
            else if(ch == 'D') Down--;
            else if(ch == 'R') Right++;
            else if(ch == 'L') Left--;
        }

        int x = Right + Left;
        int y = Up + Down;

        if(x || y) return false;
        else return true;
    }
};