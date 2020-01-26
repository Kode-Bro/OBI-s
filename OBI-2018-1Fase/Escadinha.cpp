//Solução por Tiago Silva
//Complexidade de Tempo: O(N)
//Link do Problema: https://neps.academy/problem/165

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, v[1005];
    int resp=1; //defino resp como 1, pois
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=1; i<n-1; i++){
        int diff=v[i]-v[i-1]; //declaro diff como diferença entre o valor da posição atual e o valor da posição anterior

        //checo se diff é diferente a diferença entre o valor da próxima posição e o valor da posição atual
        if(diff!=v[i+1]-v[i]){
            //se for então significa que temos outra escadinha, acrescentando 1 a resp
            resp++;
        }
    }
    //por fim, imprimo resp
    cout << resp << endl;
    return 0;
}
