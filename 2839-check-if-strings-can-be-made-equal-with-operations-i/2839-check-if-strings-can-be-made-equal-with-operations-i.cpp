class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i = 0, j = 2;
        string temp = s1;

        if(s1 == s2) return true;

        while(j<4){
            swap(temp[i], temp[j]);
            if(temp == s2) return true;

            i++;
            j++;
        }

        i = 1, j = 3;
        temp = s1;
        swap(temp[i], temp[j]);
        if(temp == s2) return true;

        return false;
    }
};