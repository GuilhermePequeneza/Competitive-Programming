class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand = nums[0];
        int cont = 0;

        for(int i = 1;i < n; i++){
            if(nums[i] == cand) {cont++;}
            else {cont--;}
            if(cont < 0){
                cand = nums[i];
                cont = 0;
            }
        }

        return cand;
    }
};