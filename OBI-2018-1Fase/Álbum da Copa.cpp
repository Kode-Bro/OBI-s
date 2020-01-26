//Solução por Tiago Silva
//Complexidade de Tempo: O(M)
//Link do Problema: https://neps.academy/problem/163

#include <bits/stdc++.h>
using namespace std;
int comp[105]; //declaro o vetor comp com todas as posições iguais a 0
int main(){
    int n, m, x, resp=0;
    cin >> n;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        comp[x]=1; //pego os valores das figurinhas que eu tenho e igualo comp[x] a 1, o que significa que eu tenho essa figurinha
    }
    //percorro todas as figurinhas do álbum checando se eu tenho a figurinha i ou não
    for(int i=1; i<=n; i++){
        //se comp[i] for igual a 0, então significa que eu não tenho a figurinha i e assim acrescento 1 a resp
        if(comp[i]==0){
            resp++;
        }
    }
    //por fim, imprimo resp
    cout << resp << endl;
    return 0;
}
