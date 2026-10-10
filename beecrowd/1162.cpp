#include<bits/stdc++.h>
using namespace std;

int contBubble(vector<int> vag){
    int n = vag.size();

    if(n <= 1){
        return 0;
    }

    int cont = 0;
    bool err;
    int aux;
   
    do{
        err = false;
        for(int i = 0; i < n-1; i++){
            if(vag[i] > vag[i+1]){
                cont++;
                swap(vag[i],vag[i+1]);
                err = true;
            }
        }        

    }while(err != false);

    return cont;
}

int main(){
    int n;
    cin >> n;

    int l;
    vector<int> vag;
    int v;
    for(int i = 0;i < n; i++){
        vag.clear();
        cin >> l;
        for(int j = 0; j < l; j++){
            cin >> v;
            vag.push_back(v);
        }
        cout << "Optimal train swapping takes " << contBubble(vag) << " swaps.\n";
    }
}