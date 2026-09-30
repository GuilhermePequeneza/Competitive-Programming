class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {        
        vector<int> ans(n*2);        
        int pos = 0;
        for(int i = 0;i<n;i++){
            ans[pos++] = nums[i];            
            ans[pos++] = nums[i+n];
        }
        return ans;
    }
};