class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int tot = m*n;

        int low = 0;
        int high = tot-1;
        int mid;
        pair<int,int> midIn;

        while(low <= high){
            mid = (low + high) / 2;
            midIn = {mid / n ,mid % n};
            if(matrix[midIn.first][midIn.second] == target){
                return true;
            }
            if(matrix[midIn.first][midIn.second] < target){
                low = mid + 1;
            }
            if(matrix[midIn.first][midIn.second] > target){
                high = mid - 1;
            }
            

        }
        return false;
    }

    
};