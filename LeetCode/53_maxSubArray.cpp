class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        int n = nums.size();    
        int soma = nums[0];
        int maiorSoma = nums[0];
        for(int i = 1;i<n;i++){
            soma += nums[i];            
            if(nums[i] >= soma){                
                soma = nums[i];                
            }         
            if(soma > maiorSoma){
                maiorSoma = soma;
            }              
        }
        return maiorSoma;
    }
};