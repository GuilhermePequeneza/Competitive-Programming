class Solution {
public:
    bool isPalindromic(string s) {
        int aux;
        string bin = "";
        for(char c : s){
            aux = c;
            bin += format("{:08b}", aux); 
        }

        int i = 0;
        int j = bin.size() - 1;
        while(i < j){
            if(bin[i] != bin[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
   

};