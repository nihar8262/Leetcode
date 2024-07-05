class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        int curr=0,jumpOne,jumpTwo,toEnd=1;
        bool flag=false;

        for(int i=1;i<n;i++){
            if(i>=2){
                if(stones[i]-stones[i-2]==curr+1 || stones[i]-stones[i-2]==curr 
                || stones[i]-stones[i-2]==curr-1){
                    jumpTwo=stones[i]-stones[i-2];
                }
            }
            if(stones[i]-stones[i-1]==curr+1 || stones[i]-stones[i-1]==curr 
            || stones[i]-stones[i-1]==curr-1){
                jumpOne=stones[i]-stones[i-1];
                flag=true;
                toEnd++;
            }
            else break;
            
            curr=max(jumpOne,jumpTwo);
        }
        cout<<toEnd;

        if(toEnd==n) return true;
        else return false;
    }
};