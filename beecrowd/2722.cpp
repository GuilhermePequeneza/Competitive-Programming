#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s1;
    string s2;
    string ans;
    for(int i = 0;i < n; i++){
        ans = "";        
        getline(cin,s1);        
        getline(cin,s2);        
        cout << s1 << " " << s2 << endl;
        int size1 = s1.size();
        int size2 = s2.size();
        int j = 0;
        int k = 0;
        if((size1*2) <= 4){
            ans += s1+s2;
        }
        else{
            while(j < size1 && k < size2){
                ans += s1[j++];
                if(j < size1) ans += s1[j++];
                if(k < size2) ans += s2[k++];
                if(k < size2) ans += s2[k++];
                
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}