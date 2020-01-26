//Solu��o por Tiago Silva
//Complexidade de Tempo: O(C*M)
//Link do Problema: https://neps.academy/problem/168

#include <bits/stdc++.h>
using namespace std;
int comp[105]; //declaro o vetor comp com todas as posi��es iguais a 0
int main()
{
    int n, c, m, resp;
    int carimbadas[55], compradas[305];
    cin >> n >> c >> m;
    resp=c; //inicialmente a resposta � igual a C, j� que ainda n�o sabemos se compramos figurinhas carimbadas
    for(int i=0; i<c; i++){
        cin >> carimbadas[i];
    }
    for(int i=0; i<m; i++){
        cin >> compradas[i];
    }
    //percorro todas as figurinhas carimbadas
    for(int i=0; i<c; i++){
        //e percorro tamb�m todas as figurinhas compradas
        for(int j=0; j<m; j++){
            //checo se a figurinha carimbada da posi��o atual � igual a figurinha comprada da posi��o atual
            //e tamb�m checo se a figurinha carimbada n�o � repetida,
            //vendo se comp[carimbadas[i]] � igual a 0
            //se passar por todas essas condi��es ent�o diminuimos resp
            //e igualamos comp[carimbadas[i]] a 1, significando que j� temos uma figurinha desse valor
            if(carimbadas[i]==compradas[j] && comp[carimbadas[i]]==0){
                resp--;
                comp[carimbadas[i]]=1;
            }
        }
    }
    //por fim, imprimo resp
    cout << resp << endl;
    return 0;
}
