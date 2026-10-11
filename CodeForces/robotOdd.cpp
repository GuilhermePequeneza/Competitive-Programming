#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    int x;
    int y;
    int cont;
    for(int i = 0; i < n ; i++){
        x = 0;
        y = 0;
        cont = 0;
        cin >> a;
        cin >> b;
        if(a == b){
            cout << a << "\n";
            continue;
        }        

        while(x <= a){
            if(x == a && y == b){
                cout << cont << "\n";
                break;
            }
            if(y > b){
                y--;
            }
            else{
                y++;
            }
            cont++;
            if(x == a && y == b){
                cout << cont << "\n";
                break;
            }
            x++;            
        }
        
        if(x > a){
            cout << "-1\n";
        }
        
        

    }
}