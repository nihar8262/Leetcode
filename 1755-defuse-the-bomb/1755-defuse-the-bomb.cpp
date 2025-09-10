class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size(),j,l = k,sum = 0;
        vector<int> ans;

        for(int i=0;i<n;i++){
            l = k;
            sum = 0;
            if(l>0){
                j = i+1;
                while(l--){
                    sum += code[j%n];
                    j++;
                }
            }
            else if(l<0){
                j = n+i+l;
                l = abs(l);
                while(l--){
                    sum += code[j%n];
                    j++;
                }
            }
            else if(l==0){
                sum=0;
            }

            ans.push_back(sum);
        }
        return ans;
    }
};