#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> st;
    int n;
    cin >> n;
    cin.ignore();
    string s;
    int cont = 151;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(!st.count(s)){
            cont--;
            st.insert(s);
        }        
    }

    cout << "Falta(m) " << cont << " pomekon(s)." << endl;
}