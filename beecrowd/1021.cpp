#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> moe = {100,50,20,10,5,2,1,0.5,0.25,0.10,0.05,0.01};
    vector<int> cri(12);
    
    double target;
    cin >> target;
    double soma = 0;
    int i = 0;
    while(i < 12){
        soma += moe[i];
        if(soma > target){
            soma -= moe[i];
            i++;
        }
        else{
            cri[i]++;
        }
    }
    
    cout << "NOTAS:\n"; 
    for(int i = 0; i < 6; i++){
        printf("%d nota(s) de R$ %.2f\n",cri[i],moe[i]);
    }
    cout << "MOEDAS:\n";
    for(int i = 6; i < 12; i++){
        printf("%d moeda(s) de R$ %.2f\n",cri[i],moe[i]);
    }
    
    return 0;
}