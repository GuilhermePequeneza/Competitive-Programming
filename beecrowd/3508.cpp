#include <bits/stdc++.h>
using namespace std;

int main() {
 
    string s;
    string t;
    
    cin >> s;
    cin >> t;
    for(int i = 0;i<s.size();i++){
        if(s[i] > t[i]){
            cout << s;
            break;
        }
        if(s[i] < t[i]){
            cout << t;
            break;
        }
    }
 
    return 0;
}