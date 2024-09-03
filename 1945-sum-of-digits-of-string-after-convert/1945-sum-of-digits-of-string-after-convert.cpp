class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        int sum=0;

        for(int i=0;i<n;i++){
            char ch=s[i];
            int num=int(ch)-96;

            if(num>9){
                while(num){
                int res=num%10;
                sum+=res;
                num/=10;
              }
            }else sum+=num;
        }

        k--;

        if(k>0){
            while(k){
                int t=sum;
                sum=0;
                while(t){
                    int res=t%10;
                    t/=10;
                    sum+=res;
                }
                k--;
            }
        }

        return sum;
    }
};