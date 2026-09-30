class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long sum = 0;
        long long sumQuad = 0;
        long long sumEsp;
        long long sumQuadEsp;       
        for(long long num : nums){
            sum += num;
            sumQuad += num * num;
        }

        sumEsp = (n * (n+1))/2;
        sumQuadEsp = (n*(n+1)*(2*n+1))/6;

        long long diff = sumEsp - sum;
        long long add = (sumQuadEsp - sumQuad) / diff;

        long long missing = (add + diff)/2;
        long long dup = (add - diff)/2;

        return {(int)dup, (int)missing};
    }
};