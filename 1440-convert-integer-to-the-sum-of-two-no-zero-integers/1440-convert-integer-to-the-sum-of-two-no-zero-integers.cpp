class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int x = 0,num = n;
        string val,valx;
        bool flag = true,flagx =true;

        while(num>1){
            x++;
            num = n - x;
            val = to_string(num) ;
            valx = to_string(x);
            int i =0,j=0;
            flag = true;
            flagx = true;
            while(i<val.size()){
                if(val[i] == '0') {
                    flag = false;
                    break;
                }
                i++;
            }
            while(j<valx.size()){
                if(valx[j] == '0'){
                    flagx = false;
                    break;
                }
            cout<<valx[j]<<" "<<flagx<<endl;
                j++;
            }
            if(x>0 &&  (flag == true && flagx == true))  return {x,num} ;
            // cout<<"-----"<<endl;
            // cout<<"-----"<<endl;

        }

        return {x,num};
    }
};