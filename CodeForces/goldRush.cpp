#include<bits/stdc++.h>
using namespace std;



int pilhas(int valor, int destino, unordered_map<int,int>& dp){    
    
    if(dp.find(valor) != dp.end()){
        return dp[valor];
    }

    if(valor % 3 != 0 || valor < destino){
        dp[valor] = 0;
        return dp[valor];  
    }    
    int pilha1, pilha2;    
    pilha1 = valor * 2/3;    
    pilha2 = valor/3;    
    if(pilha1 == destino || pilha2 == destino){
        dp[valor] = 1;
        return dp[valor];
    }
    dp[valor] = max(pilhas(pilha1,destino,dp),pilhas(pilha2,destino,dp));
    return dp[valor];
}
 
 
 
int main(){
    int t,n,m;
    cin >> t;   
     
    for(int i = 0;i<t;i++){
        cin >> n;
        cin >> m;      
        unordered_map<int,int> dp;  
        if(n == m){
            cout << "YES" << endl;
        }
        else if(pilhas(n,m,dp) == 1){
            cout << "YES" << endl;
        }        
        else{            
            cout << "NO" << endl;
        }
    }
}