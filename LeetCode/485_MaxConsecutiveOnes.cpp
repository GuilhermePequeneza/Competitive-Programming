class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {        
        int maxcont = 0;
        int cur = 0; 
        for(int i = 0;i<nums.size();i++){            
            if(nums[i] == 1){                 
                cur++;           
            }
            else{           
                maxcont = max(maxcont,cur);
                cur = 0;
            }            
        }    
        maxcont = max(maxcont,cur);

        return maxcont;    
    }
};