class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        vector<int> temp;
        string ans = "";
        int n = s.length();

        int e = 0;
        int d = 0;

        for(int i = 0; i < n; i++){
            if(e == d){                
                if(!st.empty()){
                    ans += reverse(st);
                }
                if(s[i] == '('){
                    e++;
                    st.push(s[i]);
                }                
                else{
                    ans += s[i];
                }
            }
            else if(s[i] == ')'){
                d++;
                if(e == d){
                    ans += reverse(st);
                }
                else{
                    while(st.top() != '('){
                        temp.push_back(st.top());
                        st.pop();
                    }
                    st.pop();
                    while(temp.size() != 0){
                        st.push(temp[0]);
                        temp.erase(temp.begin());
                    }
                }
            }
            else{
                if(s[i] == '('){
                    e++;
                }
                st.push(s[i]);
            }
        }

        if(!st.empty()){
            ans += reverse(st);
        }

        return ans;
    }
    

    string reverse(stack<char>& st){
        string rev = "";

        while(!st.empty()){
            if(st.top() != '('){
                rev += st.top();
            }
            st.pop();
        }
        return rev;
    }
};