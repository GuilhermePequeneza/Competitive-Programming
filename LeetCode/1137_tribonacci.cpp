class Solution {
public:
    unordered_map<int,int> dp;
    int tribonacci(int n) {
        if(n <= 1){
            return n;
        }
        if(n == 2){
            return 1;
        }
        if(dp.find(n) != dp.end()){
            return dp[n];
        }

        dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return dp[n];
    }
};