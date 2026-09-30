class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        unordered_set<string> op = {
            "+", "-", "*", "/"
        };

        int i = 0;
        int n = tokens.size();

        if(n == 1){
            return stoi(tokens[0]);
        }
        int ele1;
        int ele2;

        while(i < n){
            while(op.count(tokens[i]) == 0){
                s.push(tokens[i]);
                i++;
            }

            ele2 = stoi(s.top());
            s.pop();
            ele1 = stoi(s.top());
            s.pop();            
            
            if(tokens[i] == "+")      s.push(to_string(ele1 + ele2));
            else if(tokens[i] == "-") s.push(to_string(ele1 - ele2));
            else if(tokens[i] == "*") s.push(to_string(ele1 * ele2));                    
            else if(tokens[i] == "/") s.push(to_string(ele1 / ele2));                
            
            i++;
        }
        return stoi(s.top());
    }
};