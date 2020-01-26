//Solu��o por Tiago Silva
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
        int diff=v[i]-v[i-1]; //declaro diff como diferen�a entre o valor da posi��o atual e o valor da posi��o anterior

        //checo se diff � diferente a diferen�a entre o valor da pr�xima posi��o e o valor da posi��o atual
        if(diff!=v[i+1]-v[i]){
            //se for ent�o significa que temos outra escadinha, acrescentando 1 a resp
            resp++;
        }
    }
    //por fim, imprimo resp
    cout << resp << endl;
    return 0;
}
