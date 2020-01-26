#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<=800){
        //se N for menor ou igual a 800, imprimo 1
        cout << 1 << endl;
    }
    if(n>800 && n<=1400){
        //se N for maior que 800 e for menor ou igual a 1400, imprimo 2
        cout << 2 << endl;
    }
    if(n>1400 && n<=2000){
        //se N for maior que 1400 e menor ou igual a 2000, imprimo 3
        cout << 3 << endl;
    }
    return 0;
}
