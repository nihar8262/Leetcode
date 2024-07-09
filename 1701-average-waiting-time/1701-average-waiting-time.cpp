class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int time=customers[0][0]+customers[0][1];
        double ans=time-customers[0][0];

        for(int i=1;i<n;i++){
            if(time>customers[i][0]){
                time+=customers[i][1];
                double res=time-customers[i][0];
                ans+=res;
            }
            else{
               time=customers[i][0]+customers[i][1]; 
               double res=time-customers[i][0];
               ans+=res;
            }
        }
        double avgTime=ans/n;

        return avgTime;
    }
};