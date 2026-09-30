class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> resp(2);
        int comp;
        for(int i = 0;i<nums.size();i++){
            comp = target - nums[i];
            if(m.find(comp) != m.end()){
                resp[0] = m[comp];
                resp[1] = i;
                break;
            }
            m[nums[i]] = i;
        }
        return resp;
    }
};