class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int menorSoma = -1;
        int somaI;
        int n;
        for(int i = 0;i<nums.size();i++){
            //calcular soma dos digitos num
            n = nums[i];
            somaI = 0;
            while (n > 0){
                somaI += n%10;
                n = n/10;
            }
            if(somaI == i){                
                menorSoma = i;
                break;                
            }            
        }
        return menorSoma;
    }
};