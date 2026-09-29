class Solution {
public:
    int maxDepth(string s) {
        int pe = 0;
        int pd = 0;
        int maxNest = 0;

        for(char cha : s){
            if(cha == '('){
                pe++;
            }
            else if(cha == ')'){
                maxNest = max(maxNest, pe-pd);
                pd++;
            }
        }

        return maxNest;
    }
};