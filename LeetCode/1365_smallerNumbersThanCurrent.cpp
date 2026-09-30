class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller(101);
        vector<int> numsSort = nums;
        vector<int> re;
        sort(numsSort.begin(),numsSort.end());
        for(int num : nums){
            auto it = lower_bound(numsSort.begin(),numsSort.end(),num);
            re.push_back(it-numsSort.begin());
        }
        return re;
    }
};