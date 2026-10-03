class Solution {
public:
    vector<string> generateParenthesis(int n) {
        //pe = pd & total < n*2 -> pe
        //pe > pd & pe < n -> pe ou pd
        //pe > pd & pe = n -> pd

        vector<string> ans;
        generate(ans, "", 0, 0, n);
        return ans;       
    }

    void generate(vector<string>& ans,string atu, int pe, int pd, int n){
        if(pe+pd == 2*n){
            ans.push_back(atu);
        }
        else if(pe == pd){
            generate(ans, atu + '(', pe + 1, pd, n);
        }
        else if(pe > pd && pe < n){
            generate(ans, atu + '(', pe + 1, pd, n);
            generate(ans, atu + ')', pe, pd + 1, n);
        }
        else{
            generate(ans, atu + ')', pe, pd + 1, n);
        }
    }
};

