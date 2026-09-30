class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> m;
        string ans = "";
        string par;
        for(vector<string> know : knowledge){
            m[know[0]] = know[1];
        }

        for(int i = 0; i < s.size(); i++){
            par = "";
            if(s[i] == '('){
                i++;
                while(s[i] != ')'){
                    par += s[i];
                    i++;
                }
                if(m.find(par) != m.end()){
                    ans += m[par];
                }
                else{
                    ans += "?";
                }
            }
            else{
                ans += s[i];
            }
        }

        return ans;        
    }
};