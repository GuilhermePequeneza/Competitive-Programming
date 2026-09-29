class Solution {
public:
    
    unordered_map<int,int> dp;

    int fib(int n) {
        if(n <= 1){
            return n;
        }
        if(dp.find(n) != dp.end()){
            return dp[n];
        }
        
        dp[n] = fib(n-1) + fib(n-2);
        return dp[n];
    }   
};