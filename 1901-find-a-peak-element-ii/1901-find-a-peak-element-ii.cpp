class Solution {
public:
    int maxIndex(vector<vector<int>>& mat, int mid, int n){
        int index = -1;
        int maxEle = -1;

        for(int i = 0; i<n; i++){
            if(maxEle < mat[i][mid]){
                index = i;
                maxEle = mat[i][mid];
            }
        }

        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            int maxRowIndex = maxIndex(mat,mid, n);
            int left = mid-1 >= 0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid+1 < m ? mat[maxRowIndex][mid+1] : 1;

            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) return {maxRowIndex, mid};

            if(mat[maxRowIndex][mid] < left) high = mid - 1;
            else low = mid + 1;
        }

        return {-1,-1};
    }
};