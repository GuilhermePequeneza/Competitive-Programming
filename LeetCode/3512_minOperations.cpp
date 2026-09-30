class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int soma = 0;
        for(int num : nums){
            soma += num;
        }

        return soma%k; 
    }
};