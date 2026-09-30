class Solution {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        int i,j;
        bool pal = true; 
        i = 0;
        j = xs.length()-1;
        while(i<j){
            if(xs[i] != xs[j]){
                pal = false;
                break;
            }
            i++;
            j--;
        }
        return pal;
    }
};