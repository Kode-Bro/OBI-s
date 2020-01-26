//Solução por Tiago Silva
//Complexidade de Tempo: O(1)
//Link do Problema: https://neps.academy/problem/164

/*
Explicação do Problema:
É possível perceber com a figura do problema que sempre que a soma da última linha com a última coluna, ou seja, a soma de L e C for par,
a casa do canto inferior direito será branca, porém se a soma for ímpar a casa será preta.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, c, soma;
    cin >> l >> c;
    soma=l+c;
    if(soma%2==0){
	//se a soma for par imprimo 1, que representa a casa branca
	cout << 1 << endl;
    }else{
	//se não imprimo 0, que representa a casa preta
	cout << 0 << endl;
    }
    return 0;
}