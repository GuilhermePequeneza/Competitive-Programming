#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    vector<int> amor; 
    amor.push_back(-1);
    for(int i = 0;i<n;i++){
        cin >> temp;
        amor.push_back(temp);
    }

    for(int i = 1;i <= n; i++){
        if(amor[amor[amor[i]]] == (i)){
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

}