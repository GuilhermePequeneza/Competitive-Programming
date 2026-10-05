class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> countS(26);
        vector<int> countT(26);
        
        for(char c : s){
            countS[c - 'a']++;
        }
        for(char c : t){
            countT[c - 'a']++;
        }
        
        for(int i = 0; i < 26; i++){
            if(countS[i] != countT[i]){
                return false;
            }
        }

        return true;

    }
};