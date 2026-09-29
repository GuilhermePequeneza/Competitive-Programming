class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,nums,ans);
        return ans;
    }
    void solve(int index, vector<int>&nums, vector<vector<int>>& ans,v){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size();i++){

            if(!used[i]){
                swap(nums[index], nums[i]);

                solve(index+1, nums, ans);

                //Backtracking!
                swap(nums[index], nums[i]);
            }
            
        }        
    }  

};